#include<bits/stdc++.h>
using namespace std;

// The base class default constructor bind with the default constructor of 
// the derived class
// Compiler implicitly adds the base class default constructor as the 
// first line of code of default constructor of the derived class
// Default Constructor of the Base Class is added implicitly by Compiler
// Parameterised Constructor of the Base Classe must be called
// explicitly by us in the Derived Class Constructor 
// Base class parameterized Constructor should be called inside parameterised
// constructor of the derived class
// Base Class parameterized Constructor should be first statement in derived
// parameterised constructor
// Only one base class constructor called with in the constructor

class Base {
	int x;
public:
	Base() {
		cout << "Base Class Default Constructor" << endl;
	}
	
	Base (int a) {
		x = a;
		cout << "Base Class Parameterised Constructor" << endl;
	}
	
	~Base() {
		cout << "Base Class Destructor" << endl;
	}		
};

class Derived : public Base {
	int y;
public:
	Derived() {
		// Base :: Base(); implicity added by the compiler as first line 
		cout << "Derived Class Default Constructor" << endl;
	}
	
	Derived(int a, int b) : Base(a){
		// Base :: Base();
		y = b;
		cout << "Parameterised Constructor of the Derived Class" << endl;
	}
	
	~Derived() {
		cout << "Derived Class Destructor" << endl;
		
		// Base :: ~Base(); implicitly added by the compiler as last line
	}
};

int main() {
	Derived d(10, 20);
	return 0;
}
