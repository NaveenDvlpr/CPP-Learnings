#include<bits/stdc++.h>
using namespace std;

class Student {
	int id;
	string name;
public:
	void getStudent() {
		cout << "Enter Student ID and Name: ";
		cin >> id >> name;
	}
	void putStudent() {
		cout << "Student ID: " << id << endl;
		cout << "Student Name: " << name << endl;
	}
};


int main() {
	// ofstream file("student.dat", ios::out); // in mode --- writing mode
	ofstream file;
	file.open("student.dat", ios::out);
	Student s;
	char op;
	do {
		s.getStudent();
		file.write((char *)&s, sizeof(s));
		cout << "Enter 1 to add and other to execute " << endl;
		cin >> op;
	}while(op == '1');
	return 0;
}

// #include<fstream.h>
// Data is lost when the execution is completed to save data we use 
// secondary io operations
// The vairables data is stores in RAM so after execution of the program the 
// data is lost
// ifstream --> read, ofstream --> write, fstream
// We can open the data files in two ways 
// 1.Parameterised Constructor
// 2.Using open() member function














