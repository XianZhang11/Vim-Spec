CC=gcc
CFLAGS=
LIBS=-lstdc++
INCLUDES=

hello: main.o
	$(CC) $(CFLAGS) main.o -o main  $(LIBS)

.cpp.o : *.h
   $(CC) $lCFLAGS) $(INCLUDES) -c $<

clean:
	rm -f *.o main *.core
