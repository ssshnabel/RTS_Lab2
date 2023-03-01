all: lab2

lab2: lab2.o
		gcc lab2.o -o lab2

lab2.o: lab2.c
		gcc -c lab2.c

debug: all
		make --debug

clean:
	rm *.o lab2
