#include<bits/stdc++.h>
using namespace std;

// generic: several types only one type

template <class t>
t sum(t a, t b) {
	return a+b;
}

template <class t>
t sum(t a, t b, t c) {
	return a+b+c;
}

int main() {
	cout << sum(3, 10) << endl;
	cout << sum(1.5, 2.3) << endl;
	cout << sum(1, 5, 23) << endl;
	cout << sum(1.5, 2.3, 3.3) << endl;
	
	
	return 0;
}
