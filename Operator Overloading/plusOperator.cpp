#include<bits/stdc++.h>
using namespace std;

class Test {
	char st[100];
public:
	void read() {
		cout << "Enter a string: ";
		cin >> st;
	}
	void show() {
		cout << "String equal to " << st << endl;
	}
	
	Test operator+(Test t) {
		Test res;
		int j = 0;
		for(int i = 0; st[i] != '\0'; i++) {
			res.st[j] = st[i];
			j++;
		}
		res.st[j] = ' ';
		j++;
		for(int i = 0; t.st[i] != '\0'; i++) {
			res.st[j] = t.st[i];
			j++;
		}
		res.st[j] = '\0';
		return res;
	}
};

int main() {
	Test t1, t2, t3,t4;
	t1.read();
	t2.read();
	t3.read();
	t4 = t1+t2+t3;
	t4.show();
	return 0;
}
