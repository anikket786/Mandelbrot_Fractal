#pragma once

#include <string>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"


using namespace std;

class FractalCreator {
public:
	int m_width{ 0 };
	int m_height{ 0 };
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{ 0 };

	FractalCreator(int width, int height);
	void addZoom(const Zoom &zoom);
	void calculateIteration();
	void calculateTotalIterations();
	void drawFractal();
	void writeBitmap(string filename);
};