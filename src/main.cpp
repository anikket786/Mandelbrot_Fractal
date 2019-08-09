#include <iostream>
#include "Bitmap.h"

using namespace std;

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);
	double min = 999999;
	double max = -999999;
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH/2) * 2.0/WIDTH;
			double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;

			if (xFractal < min) min = xFractal;
			if (xFractal > max) max = xFractal;
		}
	}
	cout << min << ", " << max << endl;
	bitmap.write("../generated_image/test.bmp");
    std::cout << "Finished." << "\n";
    return 0;
}