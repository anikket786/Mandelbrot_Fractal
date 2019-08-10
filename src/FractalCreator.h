#pragma once

#include <string>
#include "ZoomList.h"

using namespace std;

class FractalCreator {
public:
	int m_width{ 0 };
	int m_height{ 0 };
	FractalCreator(int width, int height);
	void drawFractal();
	void addZoom(const Zoom &zoom);
	void writeBitmap(string filename);
};