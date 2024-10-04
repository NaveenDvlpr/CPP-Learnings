#include<bits/stdc++.h>
using namespace std;

// MultiPath Inheritance
// Deriving the classes more than one inheritance model

class Student { // Base Class
	int id;
	string name;
public:
	void getStudent() {
		cout << "Enter student id and name: ";
		cin >> id >> name;
	}
};

class Marks : public Student { // Derived Class of Student Class
protected:
	int m, p, c;
public:
	void getMarks() {
		cout << "Enter 3 subject marks: ";
		cin >> m >> p >> c;
	}
};

class Sports { // Base Class
protected:
	int sportsMarks;
public:
	void getSportsMarks() {
		cout << "Enter sports marks: ";
		cin >> sportsMarks;
	}
};

class Result : public Marks, public Sports { // Derived Class of student and sports
	int total;
	float average;
public:
	void showResult() {
		total = m+p+c;
		average = total/3.0;
		cout << "Total: " << total << endl;
		cout << "Average: " << average << endl;
		cout << "Sports Marks: " << sportsMarks << endl;
	}
};



int main() {
	Result r;
	r.getStudent();
	r.getMarks();
	r.getSportsMarks();
	r.showResult();
	return 0;
}
