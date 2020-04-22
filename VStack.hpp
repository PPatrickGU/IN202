#ifndef VSTACK_HPP
#define VSTACK_HPP
#include <vector>

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

#endif // VSTACK_HPP

