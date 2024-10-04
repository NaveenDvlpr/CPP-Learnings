#include<bits/stdc++.h>
using namespace std;

class Test {
	int a;
public:
	Test(int a) {
		this->a = a;
	} 
	bool operator==(Test t) {
		return t.a == a;
	}
};

int main() {
	Test t1(10), t2(10), t3(15);
	cout << (t1 == t2) << endl;
	cout << (t1 == t3) << endl;
	return 0;
}
