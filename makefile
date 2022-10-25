salida: arrayStack.o main.o 
	g++ -c arrayStack.o main.o -o output
main.o: main.cc arrayStack.h 
	g++-c main.cc
arrayStack.o: arrayStack.cc arrayStack.h stack.h
	g++ -c arrayStack.cc
clean:
	rm *.o
com:
	./output
