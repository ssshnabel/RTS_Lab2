all: lab3

lab3: lab3.o libflow.so
  	gcc -o lab3 lab3.o -L. lflow

lab3.o: lab3.c
  	gcc -c lab3.c

libflow.so: flow.o
  	gcc -shared -o libflow.so flow.o

flow.o: flow.c
  	gcc -c -fPIC flow.c

debug: all
	make --debug

clean:
  	rm -f*.o *.so lab3
