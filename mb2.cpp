#include<bits/stdc++.h>
using namespace std;

char getChar(int n) {
	return (char)'0'+n;
}

int main() {
	int n;
	cin >> n;
	for(int i = n; i >= 1; i--) cout << string(2*i-1, getChar(i)) << endl;
	for(int i = 2; i <= n; i++) cout << string(2*i, getChar(i)) << endl;
	return 0;
}
