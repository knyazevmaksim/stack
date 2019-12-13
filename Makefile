all: test
test: main.o stack.o
	g++ main.o stack.o -o test
main.o:main.cpp
	g++ -c main.cpp
stack.o:stack.cpp
	g++ -c stack.cpp
