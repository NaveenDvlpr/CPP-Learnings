#include<bits/stdc++.h>
using namespace std;

// Exceptions --> errors
// Exceptions Handling --> solutions for the errors
// early versions of Turbo C++ 3.0 exceptional handling is not there
// ****** try ***** throw ***** catch
// try --> is a block which contains the error causing program
// throw --> whenever the error occured we throw some value to manage the error
// catch --> going to catch the value thrown by throw statement and provide actions
// according to the error 
// Exceptional Handling use to bypass the errors


int main() {
	int a, b;
	try {
		cout << "Enter two numbers: ";
		cin >> a >> b;
		if(b == 0) throw 0;
		cout << "Division: " << a/b << endl;
	} catch(int x) {
		cout << "Division by zero is not possible." << endl;
	}
	
	
	return 0;
}
























