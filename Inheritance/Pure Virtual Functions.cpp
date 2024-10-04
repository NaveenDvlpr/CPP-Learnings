#include<bits/stdc++.h>
using namespace std;

// A pure virtual function which is declared in the base class but no definition 
// in the base class we define the pure virtual function in derivaed class
// Do-Nothing functions
// Abstract base class consists of pure virtual functions they never allow to define objects
// Used to create base class pointers at runtime to get runtime polymorphism

class Shape { // Abstract Base Class
protected:
	float d1, d2;
public:
	void getDimensions() {
		cin >> d1 >> d2;
	}
	
	virtual float calculateArea() = 0; // Pure Virtual Function
};

class Triangle : public Shape {
public:
	float calculateArea() {
		return d1*d2/2;
	}
};

class Rectangle : public Shape {
public:
	float calculateArea() {
		return d1*d2;
	}
};


int main() {
//	Shape s;
	Triangle t;
	t.getDimensions();
	cout << t.calculateArea();
	Rectangle r;
	r.getDimensions();
	cout << r.calculateArea();
	
	return 0;
}
