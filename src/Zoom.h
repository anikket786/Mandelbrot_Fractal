#pragma once

struct Zoom {
	int x{ 0 };
	int y{ 0 };
	double scale{ 0.0 };
	Zoom(int x, int y, int scale) : x(x), y(y), scale(scale){}
};