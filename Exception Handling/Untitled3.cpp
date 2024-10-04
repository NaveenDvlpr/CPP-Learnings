#include<bits/stdc++.h>
using namespace std;

class Bank {
	int number;
	float balance;
	string name;
public:
	void getAccount() {
		cout << "Enter Account Number, Name and Balance: ";
		cin >> number >> name >> balance;
	}
	void putAccount() {
		cout << "Account Number: " << number << endl;
		cout << "Holder Name: " << name << endl;
		cout << setprecision(2);
		cout << "Balance: " << balance << endl;
	}
};

int main() {
	Bank b;
	b.getAccount();
	b.putAccount();
	
	return 0;
}








