all:geometry

geometry:geometry.c
	gcc -Wall -Werror -o geometry geometry.c

run:
	./geometry

clean:
	rm geometry