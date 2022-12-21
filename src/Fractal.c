#include "Fractal.h"

void generateMandelbrot(pixel_t* pixelData, int width, int height, double minReal, double maxReal, double minImaginary, double maxImaginary, int maxIterations){
	int x = 0, y = 0, pixelCount = 0;

	// For every (x,y) pixel of the image
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			// Find real and imaginary values for c for the (x,y) pixel
			double cReal = x*((maxReal - minReal)/width) + minReal;
			double cImaginary = y*((maxImaginary - minImaginary)/height) + minImaginary;

			// Find the number of iterations (n) in the Mandelbrot formula with c
			int n = getIterations(cReal, cImaginary, maxIterations);

			// Map the resulting n to the pixel's RGB value
			mapToRGB(n, pixelData, pixelCount);
			pixelCount++;
		}
	}
}

void mapToRGB(int n, pixel_t* pixelData, int pixelCount){
	unsigned char mappedValue = n % 255;
	pixelData[pixelCount].red = mappedValue; 
	pixelData[pixelCount].green = mappedValue;
	pixelData[pixelCount].blue = mappedValue;
}

int getIterations(double cReal, double cImaginary, int maxIterations){
	// Number of required iterations
	int iterations = 0;
	double zReal = 0.0, zImaginary = 0.0;
	
	while(iterations < maxIterations && zReal*zReal + zImaginary*zImaginary <= 4.0){
		double temp = zReal*zReal - zImaginary*zImaginary + cReal;
		zImaginary = 2.0*zReal*zImaginary + cImaginary;
		zReal = temp;
		iterations++;
	}
	
	return iterations;
}
