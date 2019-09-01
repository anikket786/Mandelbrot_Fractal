#include <iostream>
#include "FractalCreator.h"

using namespace std;

int main() {

	cout <<"Running the program.... " <<"This will take around a minute" <<endl;
	
	int height = 1080;

	FractalCreator fractalCreator(1920, 1080);

	/*uncomment below lines to see zoom effects and if u want can modify 
	 the coords parameters and scaling to zoom further more.*/

	//fractalCreator.addZoom(Zoom(295, height - 202, 0.1));              
	//fractalCreator.addZoom(Zoom(312, height - 304, 0.1));

	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("../generated_image/Mandelbrot_fractal.bmp");
    std::cout << "Finished." << "\n";
    return 0;
}
