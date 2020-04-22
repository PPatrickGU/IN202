#include <iostream>
#include <vector>

#include "VStack.hpp"


VStack::VStack()
{
}

VStack::~VStack()
{}


void VStack::push(int push_number)
{
	table.push_back(push_number);
}

void VStack::pop()
{
	table.pop_back();
}

void VStack::size()
{
	std::cout << table.size() << std::endl;
}

void VStack::print()
{
	for (auto it = table.begin(); it != table.end() ; ++it)
	{ 
		std::cout << *it << ',';
	}
	std::cout << std::endl;
}

