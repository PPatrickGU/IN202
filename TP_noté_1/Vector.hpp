#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector
{
private:
	double x;
	double y;
	
public:
	Vector();
	Vector(const double x, const double y);
	~Vector();
	
	void affiche() const;
	double norme() const;

	void set_x(const double x);
	void set_y(const double y);
	double get_x() const;
	double get_y() const;

	void addition(const Vector & v);
	void initRandom(const double inf, const double sup);
};

class DynVector
{
private:
	double* v;
	int dim;
	
public:
	DynVector(const int n);
	~DynVector();
	// Here the destructor is necessary.
	
	void set();
	double norme() const;
	void affiche() const;
	void initRandom(const double inf, const double sup);
};

#endif // VECTOR_HPP
