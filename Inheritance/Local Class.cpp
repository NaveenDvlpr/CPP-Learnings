#include<bits/stdc++.h>
using namespace std;

// A local class is declared and defined inside a function
// Local class member functions must be defined inside the class all must be inline
// Object creation and Object usage must be done within the function only
// Local class doesnt allow static data members but allows static member functions

int x = 200;

void func() {
	class Test {
		int x;
	public:
		void show() {
			x = 100;
			cout << "Local x: " << x << endl;
			cout << "Global x: " << ::x << endl; 
		}
	};
	
	Test t;
	t.show();
}



int main() {
	func();
	return 0;
}
