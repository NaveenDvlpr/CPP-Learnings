#include<bits/stdc++.h>
using namespace std;

// whenever an object is used inside a try block
// when the throw keyword is executed then the destructor automatically executed

class Test {

public:
	Test() {
		cout << "Default Constructor Executed" << endl;
	}
	~Test() {
		cout << "Destructor Executed" << endl;
	}
};

int main() {
	try {
		cout << "Hello World!" << endl;
		Test t;
		throw 0; 
		cout << "Testing Destructor" << endl; 
	} catch(...) {
		cout << "Thank You" << endl;
	}
	return 0;
}
