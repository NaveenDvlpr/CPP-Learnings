#include<bits/stdc++.h>
using namespace std;

// It is mechanism of deriving a class from one base class

class Student {
	private:
		int studentID;
		string studentName;
	public:
		void getStudent() {
			cout << "Enter Student ID , Name: ";
			cin >> studentID >> studentName;
		}
		void putStudent() {
			cout << "ID: ";
			cout << studentID << endl;
			cout << "Name: ";
			cout << studentName << endl;
		}
};

class Physical : private Student {
	float height, weight;
public:
	void getPhysical() {
		getStudent();
		cout << "Enter student height and weight: ";
		cin >> height >> weight;
	}
	void putPhysical() {
		putStudent();
		cout << "Height: ";
		cout << height << endl;
		cout << "Weight: ";
		cout << weight;
	}
};

int main() {
	Physical p;
	p.getPhysical();
	p.putPhysical();
	return 0;
}












