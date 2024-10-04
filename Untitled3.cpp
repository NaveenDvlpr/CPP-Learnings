#include<bits/stdc++.h>
using namespace std;

class Test {
	int a, b, c;
public:
	Test(int x = 10, int y = 20, int z = 30) {
		a = x;
		b = y;
		c = z;
	}
	
	void print() {
		cout << a << ends << b << ends << c << endl;
	}
};

int main() {
	Test t1;
	Test t2(100);
	Test t3(100, 200);
	Test t4(100, 200, 300);
	t1.print();
	t2.print();
	t3.print();
	t4.print();
	return 0;
}
