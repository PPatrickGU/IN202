#include "Vector.hpp"
#include <iostream>

int main()
{
//Test class Vector
	std::cout << "Test class Vecotr:" << std::endl;
	std::cout << std::endl;
		
	//Test the constructor
	std::cout << "Test the constructor:" << std::endl;
	Vector v0;
	std::cout << "An empty vector is contrusted" << std::endl;

	Vector v1(3.0 , 4.0);
	std::cout << "A vector (3 ,4) is contrusted" << std::endl;
	std::cout << std::endl;
	
	//Test affiche
	std::cout << "Test affiche():" << std::endl;
	v1.affiche();
	std::cout << std::endl;
		
	//Test norme()
	std::cout << "Test norme():" << std::endl;
	std::cout << "norme = " << v1.norme() << std::endl;
	std::cout << std::endl;
		
	//Test getters and setters
	std::cout << "Test getters and setters:" << std::endl;
	std::cout << "Set (x,y) = (6,6)" << std::endl;
	v1.set_x(6);
	v1.set_y(6);
	std::cout << "x = " << v1.get_x() << "," << "y = " << v1.get_y() << std::endl;
	v1.affiche();
	std::cout << std::endl;	
	
	//Test addition()
	std::cout << "Test addition:" << std::endl;
	Vector v2(6, 7);
	std::cout << "v1 =";
    v1.affiche();
    std::cout << "v2 =";
    v2.affiche();
    v1.addition(v2);
    std::cout << "v1 + v2 =";
    v1.affiche();
    std::cout << std::endl;	
    
    //Test initRandom
    std::cout << "Test initRandom:" << std::endl;
    std::cout << "inf = 10, inf = 15:" << std::endl;
	v1.initRandom(10,15);
	v1.affiche();
	std::cout << std::endl;	
	std::cout << std::endl;		
	
	
	
//Test class DynVector
	std::cout << "Test class DynVecotr:" << std::endl;
	std::cout << std::endl;
		
	//Test the constructor
	std::cout << "Test the constructor:" << std::endl;

	DynVector v3(5);
	std::cout << "A vector of 5 dimension is contrusted" << std::endl;
	std::cout << std::endl;
	
	//Test affiche
	std::cout << "Test affiche():" << std::endl;
	v3.affiche();
	std::cout << std::endl;
		
	//Test norme()
	std::cout << "Test norme():" << std::endl;
	v3.set(); // The value is already in the function set()
	std::cout << "norme of (1; 2; 3; 4; 5) = " << v3.norme() << std::endl; 
	std::cout << std::endl;
	
    //Test initRandom
    std::cout << "Test initRandom:" << std::endl;
    std::cout << "inf = 10, inf = 15:" << std::endl;
	v3.initRandom(10,15);
	v3.affiche();
	v3.~DynVector();
	std::cout << std::endl;	

 	return 0;

}

// the destructor in the class Vector is not necessary but it is very useful in the class DynVector. 
// In Vector, we can just cover the value inside a vector when creating a new one.  
// But in DynVector, we need the destructor to free the memory. 
