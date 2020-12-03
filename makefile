all: main.o
	gcc -o parseargs main.c

main.o: main.c
	gcc -c main.c

run:
	./parseargs

clean:
	rm *.o
