all : driver.o library.o songnode.o
	gcc -o player driver.o library.o songnode.o

library.o : 
	gcc -c library.c

songnode.o :
	gcc -c songnode.c

driver.o :
	gcc -c driver.o

clean :
	rm *.o player

run :
	./player
