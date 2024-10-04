#include<bits/stdc++.h>
using namespace std;

// traverse backtrack memorise

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int N, M;

int dfs(int x, int y, int k, vector<vector<int>> &mat, vector<vector<bool>> &inPath, vector<vector<vector<int>>> &dp) {
	if(x == N-1 && y == M-1) return 0;
	if(dp[x][y][k] != -1) return dp[x][y][k];
	inPath[x][y] = true;
	int ans = INT_MAX;
	for(int i = 0; i < 4; i++) {
		int x2 = x+dx[i], y2 = y+dy[i];
		if(x2 >= 0 && y2 >= 0 && x2 < N && y2 < M && (!inPath[x2][y2])) {
			if(mat[x2][y2]) {
				if(k > 0) {
					int tmp = dfs(x2, y2, k-1, mat, inPath, dp);
					if(tmp != INT_MAX) ans = min(ans, tmp+1);	
				}
			}
			else {
				int tmp = dfs(x2, y2, k, mat, inPath, dp);
				if(tmp != INT_MAX) ans = min(ans, tmp+1);
			}
		}
	}
	inPath[x][y] = false;
	return dp[x][y][k] = ans;
} 

int shotestPath(vector<vector<int>> &mat, int n, int m, int k) {
	N = n, M = m;
    vector<vector<bool>> inPath(n, vector<bool>(m, false));
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k+1, -1)));
    int ans = dfs(0, 0, k, mat, inPath, dp);
    return ans == INT_MAX ? -1 : ans;
}


int main() {
	vector<vector<int>> mat = {
		{0, 0, 1, 0, 1, 0},
		{0, 0, 1, 1, 1, 0},
		{0, 1, 0, 0, 1, 0},
		{0, 0, 0, 1, 1, 1},
		{0, 0, 1, 0, 1, 0}
	};
	cout << shotestPath(mat, 5, 6, 100) << endl;
	
	return 0;
}

// {{0,1,1,1,0,0},{0,1,1,0,0,0},{0,0,0,1,1,0}}
