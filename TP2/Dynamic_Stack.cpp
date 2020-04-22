#include "Dynamic_Stack.hpp"
#include <iostream>


Dynamic_Stack::Dynamic_Stack(int a)
{
	m = a; //size of the stack
	table = new int[a];
	n = 0;  //size already used of the stack  
}


Dynamic_Stack::~Dynamic_Stack()
{
	n = 0;
	m = 0;
}

void Dynamic_Stack::push(int push_number)
{
	if (n < m)   //if the stack is not full
	{
		table[n] = push_number;
		n++;
	}
	else           //if the stack is full
	{
		int* temperate = new int[m];  
		for (int i=0; i<m; i++)
		{
			temperate[i] = table[i];
		}
		m++;
		
		table = new int[m];
		
		for (int i=0; i<m-1; i++)
		{
			table[i] = temperate[i];
		}
		
		table[m-1] = push_number;
		n++;
	}
}

int Dynamic_Stack::pop()
{
	if (n > 0)
	{
		n--;
		int res = table[n];
		return res;
	}
	else 
	{
		std::cout << "the stack is empty!" << std::endl;
		return 0;
	}
}

void Dynamic_Stack::size()
{
	std::cout<< n << std::endl;
}

void Dynamic_Stack::print()
{
	for (int i =n; i>0 ; i--)
	{
		std::cout << table[i-1] << ",";
		n--;
	}
	std::cout << std::endl;

}



