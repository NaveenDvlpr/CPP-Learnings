#include<bits/stdc++.h>
using namespace std;

// One base class with multiple derived classes

class Account {
	int acccountNumber;
	int holderName;
public:
	void getAccount() {
		cout << "Enter Account Number and Name of the Holder: ";
		cin >> accountNumber >> holderName;
	}
	void putAccount() {
		cout << "Account Number: " << accountNumber << endl;
		cout << "Holder Name: " << holderName << endl;
	}
};

class SavingsAccount : public Account {
	float balance;
public:
	void getBalance() {
		cout << "Enter Balance: ";
		cin >> balance;
		if(balance < 500) cout << "Minimum Balance is 500" << endl;
		else cout << "Account Created" << endl;
	}
};

class CurrentAccount : public Account {
	float balance;
public:
	void getBalance() {
		cout << "Enter Balance: ";
		cin >> balance;
		if(balance < 1000) cout << "Minimum Balance is 1000" << endl;
		else cout << "Account Created" << endl;
	}
};

int main() {
	int ch;
	cout << "1.Savings Account" << endl << "2.Current Account" << endl;
	cin >> ch;
	
	if(ch == 1) {
		SavingsAccount s;
		s.getAccount();
		s.getBalance();
	} else if(ch == 2) {
		CurrentAccount c;
		c.getAccount();
		c.getBalance();
	} else {
		cout << "Choose Valid" << endl;
	}
	
	return 0;
}









