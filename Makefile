cc=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=

addProg : edo_1.o edo_2.o main.o
	$(cc) -o addPro edo_1.o edo_2.o main.o  $(CFLAGS)

edo_1.o : edo_1.cpp 
	$(cc) -o edo_1.o -c edo_1.cpp $(CFLAGS)

edo_2.o : edo_2.cpp 
	$(cc) -o edo_2.o -c edo_2.cpp $(CFLAGS)

main.o : main.cpp edo_1.h edo_2.h
	$(cc) -o main.o -c main.cpp $(CFLAGS)

clean :
	rm -rf *.o

mrproper :
	rm -rf $(EXEC)
