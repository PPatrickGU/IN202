#ifndef STATICSTACK_HPP
#define STATICSTACK_HPP


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

#endif // STATICSTACK_HPP
