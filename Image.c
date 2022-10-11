#include "Image.h"

void writeHeader(FILE* output, unsigned int width, unsigned int height){
    fprintf(output, "P3\n%d %d\n255\n", width, height);
}

void writePixels(FILE* output, unsigned int width, unsigned int height){
    
}