#include <iostream>
#include <vector>

typedef struct ccomplex
{
	double r; //real
	double i; //image
} CComplex; 

CComplex add(CComplex a, CComplex b)
{
	CComplex res;
	res.r = a.r + b.r;
	res.i = a.i + b.i;
	return res;
};


int main()
{
	CComplex a={1,1};
	CComplex b={2,2};
	CComplex c;
	c = add(a,b);
	std::cout<< a.r << '+' << a.i << '.' << 'i'<< '+' << b.r << '+' << b.i << '.' << 'i'<< '=' <<c.r  << '+' << c.i << '.' << 'i'<< std::endl;  
}
