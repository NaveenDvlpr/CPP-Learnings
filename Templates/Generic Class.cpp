#include<bits/stdc++.h>
using namespace std;

// Generic Data Members and Generic Member Functions

template <class t>
class Test {
	t a, b;
public:
	void getab() {
		cin >> a >> b;
	}
	t sum();
};

// when the member function definition conduct outside the template class we have to 
// define again template

template <class t>
t Test<t>::sum() {
	return a+b;
}

// a and b are unknown so we should have to use datatype while creating object

int main() {
	Test <int> t1;
	Test <float> t2;
	cout << "Enter two integers: ";
	t1.getab();
	cout << "Sum: " << t1.sum() << endl;
	cout << "Enter two floats: ";
	t2.getab();
	cout << "Sum: " << t2.sum() << endl;
	return 0;
}
