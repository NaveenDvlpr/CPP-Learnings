#include<bits/stdc++.h>
using namespace std;

template<class t>

t arraySum(vector<t> &arr) {
	t sum = 0;
	for(auto i : arr) sum += i;
	return sum;
}

int main() {
	vector<int> arr1 = {1,2,3,4,5,6};
	vector<float> arr2 = {1.3,2.5,3.3,4.2};
	cout << arraySum(arr1) << endl;
	cout << arraySum(arr2) << endl;
	
	return 0;
}
