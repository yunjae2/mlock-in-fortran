all: program

program: program.o mlocker.o
	gfortran -o program program.o mlocker.o

program.o: program.f
	gfortran -c program.f

mlocker.o: mlocker.c
	gcc -c mlocker.c

run: program
	./program

clean:
	rm -rf program *.o *.so
