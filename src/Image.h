#ifndef IMAGE_H
#define IMAGE_H

#include<stdio.h>
#include<stdlib.h>

// Pixel Struct represents a pixel in the image. Can be typedefed as pixel_t.
typedef struct Pixel{
    unsigned short red;
    unsigned short green;
    unsigned short blue;
} pixel_t;

/* Parameters: image - file pointer to a PPM file
 *			   pixelData - array holding pixels
 *             width - image width
 *             height - image height
 * Return: nothing
 * Outputs a PPM image with a header and pixel data.
 */
void outputImage(FILE* image, pixel_t* pixelData, unsigned int width, unsigned int height);

/* Parameters: width - image width
 *             height - image height
 * Return: pixelData - array which holds pixels
 * Allocates memory for width x height pixels
 */
pixel_t* allocatePixels(unsigned int width, unsigned int height);

/* Parameters: pixelData - array holding pixels
 * Return: nothing
 * Frees memory for pixels
 */
void freePixels(pixel_t* pixelData);

#endif
