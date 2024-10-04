#include<bits/stdc++.h>
using namespace std;

// Virtual Destructors 

class Base {
public:
	Base() {
		cout << "Base class constructor" << endl;
	}
	
	virtual ~Base() {
		cout << "Base class destructor" << endl;
	}
};

class Derived: public Base {
public:
	Derived() {
		cout << "Derived class constructor" << endl;
	}
	
	~Derived() {
		cout << "Derived class destructor" << endl;
	}
};

int main() {
	Base *b = new Derived;
	delete b; // no binding with the derived class destructor as it is pointer to the base class
	
	return 0;
}
