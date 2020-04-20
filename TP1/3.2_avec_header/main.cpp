#include <iostream>
#include "Complex.h"

int main()
{
	Complex a(1,2);
	Complex b(3,4);
	Complex c = a.add(b);
	c.print();
}


