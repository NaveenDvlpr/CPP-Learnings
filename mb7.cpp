#include<bits/stdc++.h>
using namespace std;


int main() {
	vector<string> strs = {"blue","green","whitesmoke","red","yellow"};
	int n = strs.size();
	vector<int> strlen(n);
	int maxLen = -1;
		strlen[i] = strs[i].length();
		maxLen = max(strlen[i], maxLen);
	}
	for(int i = maxLen-1; i >= 0; i--) {
		for(int j = 0; j < n; j++) {
			if(strlen[j] >= i+1) cout << strs[j][strlen[j]-i-1];
			else cout << " ";
		}
		cout << endl;
	}
}
