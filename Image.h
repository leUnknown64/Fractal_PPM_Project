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

/* Parameters: output - a file pointer to a PPM file
               width - the width of the image
               height - the height of the image
 * Return: nothing
 * This function writes the header for a PPM Image to the output file.
 */
void writeHeader(FILE* output, unsigned int width, unsigned int height);

// Implement plotting algorithm for mandlebrot

// Coloring pattern for fractal PPM

/* Parameters: output - a file pointer to a PPM file
               width - the width of the image
               height - the height of the image
 * Return: nothing
 * This function writes all pixels to the PPM file.
 */
void writePixels(FILE* output, unsigned int width, unsigned int height);

// more to come
#endif