#include <iostream>
#include <vector> 

#include "Stack.hpp"


int main()
{
	// test of the static stack
	std::cout << "A static stack is created" << std::endl;
	Static_Stack a;
	std::cout << "size:";
	a.size();
	std::cout << "size after one push:"; 
	a.push(5);
	a.size();
	std::cout << "one pop:"; 
	int b = a.pop();
	std::cout << b << std::endl;
	std::cout << "size after one pop:";
	a.size();
	a.~Static_Stack();
	std::cout << "This static stack is deleted" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
				
		
	// test of the dynamic stack
	std::cout << "A dynamic stack of size 3 is created" << std::endl; 
	std::cout << "6 push" << std::endl; 
	Dynamic_Stack a1(3);
	std::cout << "size:";
	a1.size();
	a1.push(3);
	std::cout << "size:";
	a1.size();
	a1.push(4);
	std::cout << "size:";
	a1.size();
	a1.push(5);
	std::cout << "size:";
	a1.size();
	a1.push(6);
	std::cout << "size:";
	a1.size();
	a1.push(7);
	std::cout << "size:";
	a1.size();
	std::cout << "A pop:";
	int c = a1.pop();
	std::cout << c << std::endl;
	std::cout << "size:";
	a1.size();
	a1.~Dynamic_Stack();
	std::cout << "This dynamic stack is deleted" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	// test of the vector stack
	std::cout << "The methode of vector is used" << std::endl; 
	VStack a2;
	std::cout << "size: " ;
	a2.size();
	for (int i = 0; i<5 ;i++)
	{
		a2.push(i);
	}
	std::cout << "size after 5 push:";
	a2.size();
	std::cout << "number in the stack:" ;
	a2.print();
	a2.pop();
	std::cout << "size after one pop:";
	a2.size();
	std::cout << "This vector stack is deleted" << std::endl;
	return 0;
}

