#include<bits/stdc++.h>
using namespace std;

void printBinary(int a) {
	for(int i = 10; i >= 0; i--) 
		cout << ((a>>i)&1);
	cout << endl;
}

int main() {
	int a = 63;
	int i = 4;
	printBinary(a);
	a = a&(~((1<<i)-1));
	printBinary(a);
	
	int x = 3, y = 4;
	
	x ^= y ^= x ^ y;
	cout << x << " " << y << endl;
	
	return 0;
}
