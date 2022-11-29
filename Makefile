.PHONY: clean all

FLAGS = -Wall

all: connections

my_mat.o : my_mat.c
	gcc $(FLAGS) -c my_mat.c

libmatrix.a :my_mat.o
	ar -rc libmatrix.a my_mat.o

main.o: main.c
	gcc $(FLAGS) -c main.c


connections: main.o libmatrix.a
	gcc $(FLAGS) main.o libmatrix.a -o connections

clean:
	rm -f connections *.o *.a