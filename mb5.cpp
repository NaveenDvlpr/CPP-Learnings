#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string seating;
		cin >> seating;
		int zeros = 0, n = seating.size();
		bool foundOne = false;
		int ans = 0;
		for(int i = 0; i < n; i++) {
			if(seating[i] == '0') zeros++;
			else {
				if(foundOne) {
					if(zeros >= 5) {
						ans += ((zeros-5)/3+1);
					}
				} else {
					ans += (zeros/3);
					foundOne = true;
				}
				zeros = 0;
			}
		}
		if(foundOne) ans += (zeros/3);
		else ans += ((zeros-1)/3+1);
		cout << ans << endl;
	}
	return 0;
}
