#include<bits/stdc++.h>
using namespace std;

int main() {
	try {
		cout << "Before Throw" << endl;
		throw 1;
		cout << "After Throw" << endl; // This line is not executed
	} catch(int x) {
		cout << x << " is thrown" << endl;
	}
	cout << "Thank You" << endl;
	return 0;
}

//output
//Before Throw
//1 is thrown
//Thank You












