#include<bits/stdc++.h>
using namespace std;

int main() {
	try {
		cout << "Testing Any Exception" << endl;
		throw 10.5;
	} catch(...) { // Catches any throw value
		cout << "Catched the thrown value" << endl;
	}
	
	return 0;
}
