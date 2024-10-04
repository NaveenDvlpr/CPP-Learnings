#include<bits/stdc++.h>
using namespace std;

// Templates or Generics they allow to design one function for several family of functions
// Functions and Classes are declared using Templates and they are called
// Generic Functions and Generic Classes

//template <class t1, class t2> 
//return_type fun_name(parameters) // Parameterised types
//{
//	statements_block;
//}

template <class t>

t sum(t a, t b) {
	return a+b;
}


int main() {
	cout << sum(2, 3) << endl;
	cout << sum(2.55, 6.5) << endl;
	// cout << sum(2, 3.5) << endl; error
	
	return 0;
}
