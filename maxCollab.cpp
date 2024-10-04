#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> mask(n, 0);
	
	for(int i = 0; i < n; i++) {
		int m;
		cin >> m;
		for(int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			mask[i] |= (1<<temp);
		}
	}
	
	int worker1 = -1, worker2 = -1, maxcollab = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			int collab = __builtin_popcount(mask[i]&mask[j]);
			if(collab > maxcollab) {
				maxcollab = collab;
				worker1 = i+1;
				worker2 = j+1;
			}
		}
	}
	cout << worker1 << " " << worker2 << " " << maxcollab << endl;
	return 0;
}
