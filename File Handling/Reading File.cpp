#include<bits/stdc++.h>
using namespace std;

class Student {
	int id;
	string name;
public:
	void putStudent() {
		cout << "Student ID: " << id << endl;
		cout << "Student Name: " << name << endl;
	}
};

int main() {
	Student s;
	ifstream file("student.dat", ios::in);
	file.read((char *)&s, sizeof(s));
	cout << "ID \t Name" << endl;
	cout << "------------------" << endl;
	while(!file.eof()) {
		s.putStudent();
		file.read((char *)&s, sizeof(s));
	}
	
	return 0;
}






















