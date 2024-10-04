#include<bits/stdc++.h>
using namespace std;

class Student {
	int id;
	string name;
public:
	void enquiry();
};

void Student::enquiry() {
	Student s;
	ifstream file("student.dat");
	int idno, found = 0;
	cout << "Enter Student ID: ";
	cin >> idno;
	file.read((char *)&s, sizeof(s));
	while(!file.eof()) {
		if(s.id == idno) {
			cout << "ID: " << s.id << " Name: " << s.name << endl;
			found = 1;
			break;
		}
		file.read((char *)&s, sizeof(s));
	}
	if(found) cout << "Record Found" << endl;
	else cout << "No Recond Found" << endl;
}

int main() {
	Student s;
	s.enquiry();
	return 0;
}
