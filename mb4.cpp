#include<bits/stdc++.h>
using namespace std;

string makeString(char c, int num) {
	return c+to_string(num);
}

int main() {
	string str;
	cin >> str;
	string ans = "";
	int n = str.length();
	int ct = 1;
	for(int i = 1; i < n; i++) {
		if(str[i] == str[i-1]) ct++;
		else {
			ans += makeString(str[i-1], ct);
			ct = 1;	
		}
	}
	ans += makeString(str[n-1], ct);
	cout << ans << endl;
}
