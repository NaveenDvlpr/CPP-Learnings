#include<bits/stdc++.h>
using namespace std;

// A class derived from an another derived class of a base class
// Derived Class -> Intermediate Base Class -> Base Class

class Student {
	int id;
	string name;
public:
	void getStudent() {
		cout << "Enter student ID, Name: ";
		cin >> id >> name;
	}
	void putStudent() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};

class Marks : public Student {
protected:
	int m1, m2, m3;
public:
	void getMarks() {
		cout << "Enter 3 subject marks: ";
		cin >> m1 >> m2 >> m3;
	}
	void putMarks() {
		cout << "M1: " << m1 << endl;
		cout << "M2: " << m2 << endl;
		cout << "M3: " << m3 << endl;
	}
};

class Result : public Marks {
	int total;
	float average;
public:
	void showResult() {
		total = m1+m2+m3;
		average = total/3.0;
		cout << "Total: " << total << endl;
		cout << "Average: " << average << endl;
	}
};

int main() {
	Result r;
	r.getStudent();
	r.getMarks();
	r.putStudent();
	r.putMarks();
	r.showResult();
	return 0;
}
