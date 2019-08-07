#include <fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace std;



Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height), pPixels(new uint8_t[width*height * 3]{})
{}

bool Bitmap::write(string filename) {
	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width*m_height*3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	ofstream file(filename, ios::out | ios::binary);
	if (!file) {
		return false;
	}

	file.write((char *)&fileHeader, sizeof(BitmapFileHeader));
	file.write((char *)&infoHeader, sizeof(BitmapInfoHeader));
	file.write((char *)pPixels.get(), m_width*m_height*3);

	file.close();
	if (!file) {
		return false;
	}

	return true;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}

Bitmap::~Bitmap()
{
}
