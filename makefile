# Variables
TARGET=FractalGenerator

all: build

build:
	gcc main.c src/Image.c src/Fractal.c -o $(TARGET) -Wall
