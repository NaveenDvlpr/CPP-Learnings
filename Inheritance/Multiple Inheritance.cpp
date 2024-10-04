#include<bits/stdc++.h>
using namespace std;

// Multiple Inheritance is process of deriving a class from more than one class
// Protected members are accessible to that class and it's immediate derived class
// and further availability depends on visibility mode of inheritance
// In public type inheritance all protected members of the base class are derived as
// protected class
// In private type inheritance all protected members of the base class become
// private members of derived class and they should be accessed with public members 
// of base class
// We can use the protected members minimum in two classes

class Student {
	int id;
	string name;
public:
	void getStudent() {
		cout << "Enter student id, name: ";
		cin >> id >> name;
	}
	void putStudent() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};

class Marks {
protected:
	int m1, m2, m3;
public:
	void getMarks() {
		cout << "Enter 3 subjects marks: ";
		cin >> m1 >> m2 >> m3;
	}
	void putMarks() {
		cout << "M1: " << m1 << endl;
		cout << "M2: " << m2 << endl;
		cout << "M3: " << m3 << endl;
	}
};

class Result : public Student, public Marks {
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

























