#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include "Vector.hpp"


//Function of class Vector
Vector::Vector()
{}

Vector::Vector(const double a, const double b)
{
	x = a;
	y = b;
}

Vector::~Vector()
{};

void Vector::affiche() const
{
	std::cout << "(x,y)=" << "(" << x << "," << y << ")" << std::endl;
}

double Vector::norme() const
{
	double a = pow(x,2);
	double b = pow(y,2);
	return pow(a+b,0.5); 
}

void Vector::set_x(const double a)
{
	x = a;
}

void Vector::set_y(const double b)
{
	y = b;
}

double Vector::get_x() const
{
	return x;
}

double Vector::get_y() const
{
	return y;
}

void Vector::addition(const Vector &v)
{
	this->x = this->x + v.get_x();
	this->y = this->y + v.get_y();
}

void Vector::initRandom(const double inf, const double sup)
{
	std::default_random_engine e(time(0));       //set the value of the seed in order to have the real random
    std::uniform_real_distribution<double> u(inf, sup);
	x = u(e);
	y = u(e);
}

//Function of class DynVector

DynVector::DynVector(const int n)
{
	if (n > 0)
	{
		v = new double[n];   
		for (int i=0; i<n ; i++)
		{
			v[i] = 0;	
		}
		dim = n;
	}
	else 
	{}
}

DynVector::~DynVector() 
{
	for (int i=0; i<dim ; i++)
		{
			v[i] = 0;	
		}
	delete []v; 
}

double DynVector::norme() const
{
	double a = 0;
	for (int i=0; i<dim; i++)
	{
		a = a + pow(2, v[i]);
	}
	return pow(a, 0.5); 
}

void DynVector::affiche() const
{
	std::cout << "(x1; x2; x3...; xn)=" << "(";
	std::cout << v[0];
	for (int i=1; i<dim; i++)
	{
		std::cout << "; " << v[i] ;
	}
	std::cout << ")" << std::endl;
}

void DynVector::initRandom(const double inf, const double sup)
{
	std::default_random_engine e(time(0));       //set the value of the seed in order to have the real random
    std::uniform_real_distribution<double> u(inf, sup);
	for (int i=0; i<dim; i++)
	{
		v[i] = u(e);
	}
}

void DynVector::set()
{
	for (int i=0; i<dim; i++)
	{
		v[i] = i+1;
	}
}

