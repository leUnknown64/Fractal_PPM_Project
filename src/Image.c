#include "Image.h"

void outputImage(FILE* image, pixel_t* pixelData, unsigned int width, unsigned int height){
	// Write the image header
	fprintf(image, "P6\n%d %d 255\n", width, height);

	// Write the pixel data
	fwrite(pixelData, sizeof(pixel_t)*width*height, 1, image);
}

pixel_t* allocPixels(unsigned int width, unsigned int height){
	pixel_t* pixelData = malloc(sizeof(pixel_t)*width*height);
	return pixelData;
}

void freePixels(pixel_t* pixelData){
	free(pixelData);
}
