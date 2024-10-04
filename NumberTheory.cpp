#include<iostream>
using namespace std;

const int MOD = 1e9+7;



int main() {
	int n;
	cin >> n;
	long long fact = 1;
	for(int i = 2; i <= n; i++)
		fact = (fact*1LL*i)%MOD;
	cout << fact << endl;
	return 0;
}

// (a/b)%M = ((a%M)*(b_inv%M))%M
