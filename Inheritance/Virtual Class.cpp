#include<bits/stdc++.h>
using namespace std;

// Whenever the virtual keyword is added to the base class now the base class
// Properties are Bypassed (Only one copy is going to send)

class C1 {
public:
	void C1fun() {
		cout << "C1 class function" << endl;
	}		
};

class C2 : public virtual C1 {
public:
	void C2fun() {
		cout << "C2 class function" << endl;
	}
};

class C3 : public virtual C1 {
public:
	void c3fun() {
		cout << "C3 class function" << endl;
	}
};

class C4: public C2, public C3 {
public:
	void c4fun() {
		cout << "C4 class function" << endl;
	}
};

int main() {
	C4 c;
	c.C1fun();
	c.C2fun();
	c.c3fun();
	c.c4fun();
	return 0;
}
















