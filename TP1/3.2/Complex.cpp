#include <iostream>

class Complex 
{
private:

	double r; //Real
	double i; //Image
	
public:
	
	Complex(double a=0, double b=0):r(a),i(b) {}
	
	~Complex(){}
	
	Complex add(Complex other)
	{
		double r = r + other.r;
		double i = i + other.i;
		return Complex(r,i); 
	}
	
	void print()
	{
		double a = r;
		double b = i;
		std::cout << a << '+' << b << 'i'<< std::endl;
	}
};

int main()
{
		Complex a(1,2);
		Complex b(3,4);
		Complex c = a.add(b);
		c.print();
}


