all: lab2

lab2: lab2.o
	gcc lab2.o -o lab2

lab2.o: lab2.c
	gcc -c lab2.c

DEBUG: -g

clean:
	rm *.out