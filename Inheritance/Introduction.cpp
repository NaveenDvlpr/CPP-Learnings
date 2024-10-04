#include<bits/stdc++.h>
using namespace std;

// Inheritance is the process of deriving a new class from existing old classes
// Process of passing the properties of one class to another
// Old class (base class or super class) and New class (derived class or sub class)
// Inheritence provides Reusability and Extensibility
// Inheritence is passing of the all members of a class to another class

/* class derived_class : public/private/protected base_class {
	----;
	----;
	----;
}; */
// : inheritance operator
// public/private/protected visibility mode
// The base class members availability depended on the visiblity mode

class Base {
	int x;
public:
	int y;
protected:
	int z;
};

class Derived1 : public Base{
// When a class is derived in public mode then all the public members of the base
// class becomes public and protected members of the base class become protected
	int c, d;
};

class Derived2: private Base {
// default mode is private only
// public Members become private and protected members also become private
};

// In public or private derivation private members are not derived to derived class
// Private members not participate in inheritance

int main() {
	Y y;
	cout << sizeof(y) << endl;
	// y contains the data members a, b, c, d
	return 0;
}

// Direct Base Class / Indirect Base Class
// Inheritance types:
// Single Level Inheritance
// Multi Level Inheritance
// Multiple Inheritance
// Hybrid / MultiPath Inheritance
// Hierarchical Inheritance














