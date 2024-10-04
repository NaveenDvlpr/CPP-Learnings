#include<bits/stdc++.h>
using namespace std;

bool isNum(char c) {
	if(c >= '0' && c <= '9') return true;
	return false;
}

int getNum(char c) {
	return c-'0';
}

int main() {
	string str;
	cin >> str;
	
	string ans = "";
	int num = 0, n = str.length();
	
	for(int i = 0; i < n; i++) {
		if(isNum(str[i])) num = num*10+getNum(str[i]);
		else {
			if(num == 0) ans.push_back(str[i]);
			else {
				ans += string(num, str[i]);
				num = 0;
			}
		}
	}
	
	cout << ans << endl;
}
