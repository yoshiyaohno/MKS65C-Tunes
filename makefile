all : driver.o library.o list.o
	gcc -o player driver.o library.o list.o

library.o : library.c library.h
	gcc -c library.c

list.o : list.c list.h
	gcc -c list.c

driver.o : driver.c
	gcc -c driver.c

clean :
	rm *.o player

run :
	./player
