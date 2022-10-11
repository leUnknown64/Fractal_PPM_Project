all: build

build:
	gcc Image.c driver.c -o Fractal -Wall

run:
	./Fractal