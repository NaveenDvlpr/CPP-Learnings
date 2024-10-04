#include<bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int>& nums) {
        int cand1 = -1, onevotes = 0, cand2 = -1, twovotes = 0;
        for(auto i : nums) {
            if(cand1 == -1) {
                cand1 = i;
                onevotes = 1;
            } else if(cand2 == -1) {
                cand2 = i;
                twovotes = 1;
            } else {
                if(i == cand1) onevotes++;
                else if(i == cand2) twovotes++;
                else {
                    if(onevotes <= twovotes) {
                        if(onevotes == 1) cand1 = i;
                        else onevotes--;
                    } else {
                        if(twovotes == 1) cand2 = i;
                        else twovotes--;
                    }
                }
            }
        }
        cout << cand1 << " " << onevotes << endl;
        cout << cand2 << " " << twovotes << endl;
        vector<int> ans;
        onevotes = 0;
        twovotes = 0;
        cand2 = 93096;
        for(auto i : nums) {
            if(i == cand1) onevotes++;
            else if(i == cand2) twovotes++;
        }
        
        cout << cand1 << " " << onevotes << endl;
        cout << cand2 << " " << twovotes << endl;
        
        if(onevotes > nums.size()/3) ans.push_back(cand1);
        if(twovotes > nums.size()/3) ans.push_back(cand2);
        
        
        
        if(ans.size()) {
            if(ans.size() == 2 && ans[0] > ans[1]) {
                swap(ans[0], ans[1]);
            }  
        } else ans = {-1};
        
        return ans;
    }



int main() {
	ifstream inputFile("input.txt");
	
	if(!inputFile.is_open()) {
		cerr << "Error opening the file" << endl;
		return 1;
	}
	
	string input;
	getline(inputFile, input);
	int num = 0, len = input.length();
	vector<int> nums;
	for(int i = 0; i < len; i++) {
		if(input[i] == ' ') {
			nums.push_back(num);
			num = 0;
		} else {
			num *= 10;
			num += (input[i]-'0');
		}
	}
	nums.push_back(num);
	cout << nums.size() << endl;
	vector<int> ans = findMajority(nums);
	
	for(auto i : ans) cout << i << endl;
	return 0;
}

















