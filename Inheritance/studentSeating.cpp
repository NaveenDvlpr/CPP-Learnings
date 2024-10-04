#include<bits/stdc++.h>
using namespace std;

struct student {
	string name;
	char gender;
};

vector<vector<string>> findArrangements(vector<student> &students) {
	int n = students.size();
	vector<bool> isSeated(n, false);
	vector<vector<string>> ans;
	solve(students, )
}

int main() {
	cout << "Enter number of students: ";
	int n; 
	cin >> n;
	vector<student> students;
	for(int i = 0; i < n; i++) {
		cout << "student name and gender(M/F): "
		student s;
		cin >> s.name >> >> s.gender;
	}
	vector<vector<strings>> arrangements = findArrangements(students);
	for(auto arrangement : arrangements) {
		for(auto name : arrangement) cout << name << " ";
		cout << endl;
	}
}
