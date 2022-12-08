CC = g++
CFLAGS = -Wall -g -std=c++11

main: main.o funcs.o
	$(CC) $(CFLAGS) -o main main.o funcs.o

tests: tests.o funcs.o
	$(CC) $(CFLAGS) -o tests tests.o funcs.o


funcs.o: funcs.cpp funcs.h
	$(CC) $(CFLAGS) -c funcs.cpp

main.o: main.cpp funcs.h
	$(CC) $(CFLAGS) -c main.cpp

tests.o: tests.cpp doctest.h funcs.h
	$(CC) $(CFLAGS) -c tests.cpp

clean:
	rm -f *.o main tests