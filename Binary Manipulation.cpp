// (a+b)%M = (a%M+b%M)%M
// (a*b)%M = (a%M*b%M)%M
// (a-b)%M = (a%M-b%M+M)%M
// (a/b)%M = (a%M*b_inv%M)%M

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

void printBinary(int a) {
	for(int i = 31; i >= 0; i--) {
		if(a&(1<<i)) cout << 1;
		else cout << 0;
	}
	cout << endl;
}

bool getBit(int a, int i) {
	return a&(1<<i);
}

void setbit(int &a, int i) {
	a |= (1<<i);
}

void unsetbit(int &a, int i) {
	a &= (~(1<<i));
}

void togglebit(int &a, int i) {
	a ^= (1 << i);
}

int getSetBits(int a) {
	int count = 0;
	for(int i = 31; i >= 0; i--) {
		if(a & (1 << i)) count++;
	}
	return count;
}

int main() {
	int a = 9;
	togglebit(a, 0);
	printBinary(a);
	cout << getSetBits(INT_MAX) << endl;
	cout << __builtin_popcountll(1LL<<35) << endl;
	return 0;
}

// 
