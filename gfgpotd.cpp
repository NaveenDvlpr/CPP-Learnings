#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstr(string &str1, string &str2) {
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int ans = INT_MIN;
    for(int i = m-1; i >= 0; i--) {
        for(int j = n-1; j >= 0; j--) {
            if(str1[j] == str2[i]) {
                if(i+1 < m && j+1 < n) dp[j][i] = dp[j+1][i+1]+1;
                else dp[j][i] = 1;
            }
            ans = max(ans, dp[j][i]);
    	}
	}
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < m; j++) cout << dp[i][j] << " ";
    	cout << endl;
	}
    return ans;
}

int main() {
	string str1 = "ABCDGH", str2 = "ACDGHR";
	cout << longestCommonSubstr(str1, str2);
	return 0;
}















