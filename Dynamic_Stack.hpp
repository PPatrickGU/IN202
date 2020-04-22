#ifndef DYNAMICSTACK_HPP
#define DYNAMICSTACK_HPP


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

#endif // DYNAMICSTACK_HPP
