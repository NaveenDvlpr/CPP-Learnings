#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length(), mid = n/2;
	for(int i = 0; i < n; i++) {
		if(i == mid) {
			cout << string(mid, ' ')+str[mid] << endl;
			continue;
		}
		cout << string(i%(mid+1), ' ')+str[i] << endl;
	}
	
	
	return 0;
}
