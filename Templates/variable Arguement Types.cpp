#include<bits/stdc++.h>
using namespace std;

template<class t1, class t2>

// when operating on different data set the return datatype according to requirements

float sum(t1 a, t2 b) {
	return a+b;
}


int main() {
	cout << sum(2, 3) << endl;
	cout << sum(2.1, 3.2) << endl;
	cout << sum(2, 3.5) << endl;
	cout << sum(3.5, 2) << endl;
	
	return 0;
}
