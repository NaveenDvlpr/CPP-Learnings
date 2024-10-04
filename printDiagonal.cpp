#include<bits/stdc++.h>
using namespace std;

int isValid(int i, int j, int n, int m) {
	if(i < 0 || j < 0 || i >= n || j >= m) return false;
	return true;
}

void printDiagonal(int p1, int p2, int n, int m, vector<vector<int>> &matrix) {
	while(isValid(p1, p2, n, m)) {
			cout << matrix[p1][p2] << " ";
			p1--;
			p2++;
	}
	cout << endl;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix(n, vector<int>(m));
	
	for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++) 
			cin >> matrix[i][j];
			
	for(int i = 0; i < n; i++) printDiagonal(i, 0, n, m, matrix);
	for(int i = 1; i < m; i++) printDiagonal(n-1, i, n, m, matrix);
	
	return 0;
}
