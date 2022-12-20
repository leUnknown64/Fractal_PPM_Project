#include "Image.h"

// To-Do: rework code for P6 format images

void writeHeader(FILE* output, unsigned int width, unsigned int height){
    fprintf(output, "P6\n%d %d 255\n", width, height);
}

void writePixels(FILE* output, unsigned int width, unsigned int height){
    
}