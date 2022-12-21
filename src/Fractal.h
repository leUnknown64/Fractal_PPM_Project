#ifndef FRACTAL_H
#define FRACTAL_H

#include "Image.h"

/* Parameters: pixelData - array holding pixels
 *             width - image width
 *             height - image height
 *             minReal - the minimum value for real numbers
 *             maxReal - the maximum value for real numbers
 *             minImaginary - the minimum value for imaginary numbers
 *             maxImaginary - the maximum value for imaginary numbers
 *             maxIterations - the maximum number of iterations in the Mandelbrot formula
 * Return: nothing
 * Generates the Mandelbrot set and maps it to the image's pixels
 */
void generateMandelbrot(pixel_t* pixelData, int width, int height, double minReal, double maxReal, double minImaginary, double maxImaginary, int maxIterations);

/* Parameters: n - resulting number of iterations in the Mandelbrot formula
 *             pixelData - array holding the image's pixels
 *             pixelCount - the index for the array pixelData (pixel currently visited)
 * Return: nothing
 * Maps n's value to the RGB values of a pixel
 */
void mapToRGB(int n, pixel_t* pixelData, int pixelCount);

/* Parameters: cReal - the real value of c
 *             cImaginary - the imaginary value of c
 *             maxIterations - maximum number of iterations in the Mandelbrot formula
 * Return: nothing
 * Gets the number of iterations in the Mandelbrot formula using cReal and cImaginary
 */
int getIterations(double cReal, double cImaginary, int maxIterations);

#endif
