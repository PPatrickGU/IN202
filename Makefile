CFLAGS=-g -Wall -Werror -std=c++11

Stack_Test: main

main: main.cpp Stack.cpp
	g++ $(CFLAGS) -o main main.cpp Stack.cpp
