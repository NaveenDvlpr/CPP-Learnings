#include<bits/stdc++.h>
using namespace std;

int solve(long long arr[], int n) {
	vector<int> left(n), right(n);
    left[0] = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) left[i] = i-1;
        else {
            int k = left[i-1];
            while(k != -1 && arr[k] >= arr[i]) k = left[k];
            left[i] = k;
        }
    }
    right[n-1] = -1;
    for(int i = n-2; i >= 0; i--) {
    	if(arr[i] > arr[i+1]) right[i] = i+1;
    	else {
    		int k = right[i+1];
    		while(k != -1 && arr[k] >= arr[i]) k = right[k];
    		right[i] = k;
		}
	}
	long long ans = 0;
	for(int i = 0; i < n; i++) {
		int range = 1;
		if(left[i] == -1) range += i;
		else range += (i - left[i] - 1);
		if(right[i] == -1) range += (n-1 - i);
		else range += (right[i] - i - 1);
		ans = max(ans, arr[i]*range);
	}
	return ans;
}

int main() {
	long long arr[15] = {3, 2, 4, 5, 7, 6, 1, 3, 8, 9, 10, 7, 5, 2, 6};
	cout << solve(arr, 15);
	return 0;
}








