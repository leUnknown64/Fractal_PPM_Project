all: build

build:
	gcc main.c Image.c -o Fractal -Wall

run:
	./Fractal
