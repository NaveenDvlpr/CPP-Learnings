#include<bits/stdc++.h>
using namespace std;

class Test2;

class Test1{
	int a;
public:
	void geta() {
		cout << "Enter a value: ";
		cin >> a;
	}
	friend void operator > (Test1, Test2);
};

class Test2{
	int b;
public:
	void getb() {
		cout << "Enter b value: ";
		cin >> b;
	}
	friend void operator > (Test1, Test2);
};


void operator > (Test1 t1, Test2 t2) {
	(t1.a > t2.b) 
		? cout << "First Class Object member is large" 
		: cout << "Second Class Object member is large";
}

int main() {
	Test1 t1;
	Test2 t2;
	t1.geta();
	t2.getb();
	t1 > t2;
	
	return 0;
}

// In Operator Overloading  whenever using friend then one explicit arguement should be provided
// Working on binary operator we have to provide two explicit arguements
































