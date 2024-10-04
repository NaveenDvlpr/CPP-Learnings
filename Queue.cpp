#include<iostream>
using namespace std;

class Queue {
	int capacity;
	int front;
	int rear;
	int *arr;
	
public:
	Queue(int c) {
		capacity = c;
		arr = new int[capacity];
		front = -1;
		rear = -1;
	}
	
	~Queue() {
		release();
		cout << "Memory Deallocated" << endl;
	}
	
	bool isEmpty() {
		return front == -1;
	}
	
	int frontElement() {
		if(isEmpty()) return -1;
		else return arr[front];
	}
	
	void enqueue(int x) {
		if(rear+1 == capacity) {
			cout << "Queue is Full" << endl;
		} else {
			if(isEmpty()) front = 0;
			rear++;
			arr[rear] = x;
			cout << "Inserted at Back" << endl;
		}
	}
	
	void dequeue() {
		if(isEmpty()) cout << "Queue is Empty" << endl;
		else {
			cout << "Front Element Popped: " << arr[front] << endl;
			if(front == rear) front = rear = -1;
			else front++;
		}
	}
	
	void release() {
		delete arr;
	}
};

int main() {
	Queue queue(5);
	while(1) {
		cout << "------Enter------" << endl;
		cout << "1.isEmpty" << endl;
		cout << "2.FrontElement" << endl;
		cout << "3.Enqueue" << endl;
		cout << "4.Dequeue" << endl;
		cout << "0.Exit" << endl;
		
		int ch; 
		cin >> ch;
		
		switch(ch) {
			case 0: break;
			case 1:
				if(queue.isEmpty()) cout << "Queue is Empty" << endl;
				else cout << "Queue is not Empty" << endl;
				break;
			case 2:
				if(queue.isEmpty()) cout << "Queue is Empty" << endl;
				else cout << "Front Element: " << queue.frontElement() << endl;
				break;
			case 3:
				{
					int x;
					cout << "Enter value to insert: ";
					cin >> x;
					queue.enqueue(x);
				}
				break;
			case 4:
				queue.dequeue();
				break;
			default:
				cout << "Choose a valid option" << endl;
		}
		if(ch == 0) {
			queue.release();
			break;	
		}
	}
	return 0;
}



























