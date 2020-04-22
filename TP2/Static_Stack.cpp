#include "Static_Stack.hpp"
#include <iostream>

Static_Stack::Static_Stack()
{
	n = 0;
}

Static_Stack::~Static_Stack()
{
	n = 0;
}

void Static_Stack::push(int push_number)
{
	if (n < 1024)
	{
		table[n] = push_number;
		n++;
	}
	else 
	{
		std::cout << "The stack is already full" << std::endl;
	}
}

int Static_Stack::pop()
{
	if (n > 0)
	{

		n--;
		int res = table[n];
		return res;
	}
	else 
	{
		std::cout << "the stack is empty!\n" << std::endl;
		return 0;
	}
}

void Static_Stack::size()
{
	std::cout << n << std::endl;
}

void Static_Stack::print()
{
	for (int i =n; i>0; i-- )
	{
		std::cout << table[i-1] << ",";
		n--;
	}
	std::cout << std::endl;

}

