#include <iostream>
#include "Bitmap.h"

int main() {
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			bitmap.setPixel(x, y, 0, 0, 0);
		}
	}
	bitmap.write("../generated_image/test.bmp");
    std::cout << "Finished." << "\n";
    return 0;
}