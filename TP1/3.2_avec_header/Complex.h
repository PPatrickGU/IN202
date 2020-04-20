#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{
private:

	double r; //Real
	double i; //Image
	
public:
	
	//Complex();	
		
	Complex(double a=0, double b=0);
	
	~Complex();
	
	Complex add(Complex other);
	
	void print();
};

#endif

