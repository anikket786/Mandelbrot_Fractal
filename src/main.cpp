#include <iostream>
#include "Bitmap.h"

int main() {
	Bitmap bitmap(800, 600);
	bitmap.write("../generated_image/test.bmp");
    std::cout << "Finished." << "\n";
    return 0;
}