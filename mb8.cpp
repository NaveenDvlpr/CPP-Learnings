#include<bits/stdc++.h>
using namespace std;



int main() {
	string str;
	getline(cin, str);
	cout << str;	
	map<int, string> mp;
	int num = 0;
	string temp = "";
	for(char c : str) {
		if(c == ' ') {
			mp[num] = temp;
			num = 0;
			temp = "";
		} else if(c >= '0' && c <= '9') {
			num = num*10+(c-'0');
		} else {
			temp.push_back(c);
		}
	}
	mp[num] = temp;
	for(auto i : mp) {
		cout << i.second << " ";
	}
	return 0;
}
