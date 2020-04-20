#include "Complex.h"
#include <iostream>

//Complex::Complex(){}

Complex::Complex(double a, double b):r(a),i(b){}
	
Complex::~Complex(){}
	
Complex Complex::add(Complex other)
{
	double real = r + other.r;
	double image = i + other.i;
	return Complex(real, image); 
}
	
void Complex::print()
{
	double a = r;
	double b = i;
	std::cout << a << '+' << b << 'i'<< std::endl;
}


