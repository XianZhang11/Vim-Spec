CC=gcc
CFLAGS=-std=c++11
LIBS=-lstdc++
INCLUDES=

OBJECTS= main.o BST.o NQueen.o
hello: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o main  $(LIBS)

.cpp.o : *.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $<

clean:
	rm -f *.o main *.core
