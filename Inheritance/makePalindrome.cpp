#include<bits/stdc++.h>
using namespace std;

string optimalString(int n) {
	if(n == 1) return "1";
	else return "1"+string(n-2, '0')+"1";
}

string binaryPalindrome(int n, int k) {
    if(k == 1) return string(n, '1');
    if(k >= n) return optimalString(n);
    string ans;
	if(n%k == 0) {
    	for(int i = 0; i < n/k; i++) {
    		ans += optimalString(k);
		}
	} else {
		int q = n/k, r = n%k;
		for(int i = 0; i < q; i++) {
			ans += optimalString(r)+string(k-r, '0');
		}
		ans += optimalString(r);	
	}
	return ans;
}

int main() {
	for(int i = 1; i <= 10; i++) {
		cout << binaryPalindrome(10, i) << endl;	
	}
	return 0;
}
