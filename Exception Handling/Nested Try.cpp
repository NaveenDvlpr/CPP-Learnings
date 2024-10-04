#include<bits/stdc++.h>
using namespace std;

int main() {
	try {
		cout << "Try 1" << endl;
		try {
			cout << "Try 2" << endl;
			throw 0;
		} catch(int x) {
			cout << "Try 2 Catch" << endl;
			throw x;
		}
	} catch(int x) {
		cout << "Try 1 Catch" << endl;
	}
	
	return 0;
}
