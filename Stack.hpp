#ifndef STACK_HPP
#define STACK_HPP
#include <vector>

// The file is the assemblage of the three headers : Static Stack, Dynamic Stack and Vector Stack.

class Static_Stack
{
private:
	int table[1024]; 
	int n;  //size already used of the stack  

		
public:

	Static_Stack();
	~Static_Stack();

	void push(int a);
	int pop();
	void size();
	void print();
};

class Dynamic_Stack
{
private:
	int m=0; //size of the stack
	int* table;	
	int n;  //size already used of the stack  

		
public:

	Dynamic_Stack(int m);
	~Dynamic_Stack();

	void push(int a);
	int pop();
	void size();
	void print();
};

class VStack
{
private:
	std::vector<int> table;
		
public:

	VStack();
	~VStack();

	void push(int a);
	void pop();
	void size();
	void print();
};

#endif // STACK_HPP
