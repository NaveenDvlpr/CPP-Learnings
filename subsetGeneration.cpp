#include<bits/stdc++.h>
using namespace std;


int main() {
	int n = 4;
	int arr[n] = {1, 2, 3, 4};
	int size = 1<<4;
	vector<vector<int>> ans;
	for(int i = 0; i < size; i++) {
		vector<int> temp;
		for(int j = 0; j < 4; j++) {
			if(i&(1<<j)) temp.push_back(arr[j]);
		}
		ans.push_back(temp);
	}
	for(auto v : ans) {
		if(!v.size()) cout << "empty array";
		else for(auto i : v) cout << i << " ";
		cout << endl;
	}
	return 0;
}
