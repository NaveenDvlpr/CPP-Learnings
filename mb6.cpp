#include<bits/stdc++.h>
using namespace std;

bool isNumber(char c) {
	return c >= '0' && c <= '9';
}

int getNumber(char c) {
	return c-'0';
}

int main() {
	string str;
	getline(cin, str);
	int m = 1;
	for(char c : str) if(c == ' ') m++;
	vector<string> values(m, "");
	int num = 0;
	string tmpStr = "";
	for(char c : str) {
		if(c == ' ') {
			cout << num << " " << tmpStr << endl;
			values[num-1] = tmpStr;
			num = 0;
			tmpStr = "";	
		}	
		else if(isNumber(c)) {
			num = num*10+getNumber(c);
		} else {
			tmpStr.push_back(c);
		}
	}
	values[num-1] = tmpStr;
	
	for(string st : values) {
		cout << st << " ";
	} 
	return 0;
}
