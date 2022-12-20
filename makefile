all: build

build:
	gcc main.c src/Image.c -o Fractal -Wall

run:
	./Fractal
