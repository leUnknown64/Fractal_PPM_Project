#include "src/Fractal.h"

#define WIDTH 800
#define HEIGHT 600
#define MIN_REAL -1.5
#define MAX_REAL 0.0
#define MIN_IMAGINARY -1.0
#define MAX_IMAGINARY 1.0
#define MAX_ITERATIONS 1000

int main(int argc, char** argv){
	// Verify command line arguments
	if(argc != 2){
		printf("Please provide only one command line argument:\n\tThe name of the image file, i.e., Fractal.ppm\n");
		return -1;
	}

    // Open image file for fractal
    FILE* fractal = fopen(argv[1], "wb");
	if(fractal == NULL){
		printf("Cannot open the file %s.\n", argv[1]);
		return -1;
	}

    // Allocate memory for image's pixels
    pixel_t* imagePixels = allocatePixels(WIDTH, HEIGHT);

	// Generate the Mandelbrot set
	generateMandelbrot(imagePixels, WIDTH, HEIGHT, MIN_REAL, MAX_REAL, MIN_IMAGINARY, MAX_IMAGINARY, MAX_ITERATIONS);

	// Create an image of the fractal
	outputImage(fractal, imagePixels, WIDTH, HEIGHT);

	// Clean up
	freePixels(imagePixels);

    return 0;
}
