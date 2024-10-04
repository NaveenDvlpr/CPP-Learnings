#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str = to_string(n);
	reverse(str.begin(), str.end());
	cout << str << endl;
	
	return 0;
}
