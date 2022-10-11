#include "Image.h"
#include<assert.h>
#define WIDTH 800
#define HEIGHT 600

int main(int argc, char* argv[]){
    // Create output PPM file
    FILE* PPMOut = fopen("Fractal.ppm", "w");
    assert(PPMOut != NULL);

    // Write header data to PPM file
    writeHeader(PPMOut, WIDTH, HEIGHT);

    // Write pixels to PPM file
    writePixels(PPMOut, WIDTH, HEIGHT);

    return 0;
}