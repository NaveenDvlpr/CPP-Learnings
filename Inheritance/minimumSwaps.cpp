#include<bits/stdc++.h>
using namespace std;

int findPosition(int val, vector<int> &arr) {
    int s = 0, e = arr.size()-1;
    while(e-s > 1) {
        int m = (e+s)/2;
        if(arr[m] == val) return m;
        else if(arr[m] < val) s = m+1;
        else e = m-1;
    }
    if(arr[s] == val) return s;
    return e;
}
    
    //Function to find the minimum number of swaps required to sort the array. 
int minSwaps(vector<int>&nums)
{
	int n = nums.size();
	vector<int> lookup = nums;
	sort(lookup.begin(), lookup.end());
	int ans = 0;
	for(int i = 0; i < n; i++) {
	    while(nums[i] != lookup[i]) {
	        ans++;
	        int pos = findPosition(nums[i], lookup);
	        swap(nums[i], nums[pos]);
	    }
	}
	return ans;
}


int main() {
	vector<int> arr = {1, 2, 3, 4, 5};
	for(int i = 1; i <= 5; i++) {
		cout << findPosition(i, arr) << endl;
	}
	
	return 0;
}
