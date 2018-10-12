all : driver.o library.o list.o
	gcc -o player driver.o library.o list.o

library.o : 
	gcc -c library.c

list.o :
	gcc -c list.c

driver.o :
	gcc -c driver.o

clean :
	rm *.o player

run :
	./player
