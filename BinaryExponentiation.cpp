#include<bits/stdc++.h>
using namespace std;

int binRec(int a, int b) {
	if(b == 0) return 1;
	int temp = binRec(a, b/2);
	if(b&1) return temp*temp*a;
	else return temp*temp;
}

int binExp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b&1) ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}

int main() {
	cout << binExp(2, 5) << endl;
	
	return 0;
}
