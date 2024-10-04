#include<bits/stdc++.h>
using namespace std;

class Student {
	int studentID;
	string studentName;
public:
	friend void operator >> (istream &in, Student &s) {
		cout << "Enter student id and name: ";
		in >> s.studentID >> s.studentName;
	}
	friend void operator << (ostream &out, Student &s) {
		out << "Student ID: " << s.studentID << endl;
		out << "Student Name: " << s.studentName << endl;
	}
};

int main() {
	Student s;
	cin >> s;
	cout << s;
	return 0;
}
