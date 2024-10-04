#include<iostream>
using namespace std;

class Stack {
private:
	
	int capacity;
	int top;
	int *arr;

public:
	
	Stack(int c) {
		capacity = c;
		arr = new int[capacity];
		top = -1;
	}
	
	bool isEmpty() {
		return top == -1;
	}
	
	int topElement() {
		if(isEmpty()) return -1;
		else return arr[top];
	}
	
	void push(int x) {
		if(top+1 == capacity) {
			cout << "Stack Overflow" << endl;
		} else {
			top++;
			arr[top] = x;
			cout << "Pushed On Top" << endl;
		}
	}
	
	void pop() {
		if(isEmpty()) cout << "Stack UnderFlow" << endl;
		else {
			int temp = topElement();
			top--;
			cout << "Popped Top: " << temp << endl;
		}
	}
	
	void release() {
		delete arr;
	}
};

int main() {
	Stack st(5);
	while(1) {
		cout << "------Enter----" << endl;
		cout << "1.Is Stack Empty" << endl;
		cout << "2.Top Element" << endl;
		cout << "3.Push" << endl;
		cout << "4.Pop" << endl;
		cout << "0. Exit" << endl;
		int ch;
		cin >> ch;
		switch(ch) {
			case 0: break;
			case 1: 
				if(st.isEmpty()) cout << "Stack is Empty" << endl;
				else cout << "Stack is not Empty" << endl;
				break;
			case 2:
				{
					int tp = st.topElement();
					if(tp == -1) cout << "Stack is Empty" << endl;
					else cout << "Top Element: " << tp << endl;
				}
				break;
			case 3:
				{
					cout << "Enter value to push" << endl;
					int x;
					cin >> x;
					st.push(x);
				}
				break;
			case 4:
				st.pop();
				break;
			default:
				cout << "Choose valid input" << endl;
		}
		if(ch == 0) {
			st.release();
			break;
		}
	}
	return 0;
}


















