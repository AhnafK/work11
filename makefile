all: statisfaction.o
	gcc statisfaction.o

statisfaction.o: statisfaction.c
	gcc -c statisfaction.c

run:
	./a.out

clear:
	rm statisfaction.o
	rm a.out
