#include<iostream>
using namespace std;

class Node {
public:
	int key;
	int value;
	Node *next;
	Node(int key, int value) {
		this->key = key;
		this->value = value;
		next = NULL;
	} 
};

class LinkedList {
	Node *head;
public:
	LinkedList() {
		head = NULL;
	}
	bool isEmpty() {
		return head == NULL;
	}
	bool isKeyExists(int);
	void append(Node*);
	void preppend(Node*);
	void insertAfter(int, Node*);
	void updateNode(int , int);
	void deleteNode(int);
	void deleteHead();
	void deleteTail();
	void printList();
};

bool LinkedList::isKeyExists(int key) {
	if(head == NULL) return false;
	Node *ptr = head;
	while(ptr) {
		if(ptr->key == key) return true;
		ptr = ptr->next;
	}
	return false;
} 

void LinkedList::append(Node* node) {
	if(isKeyExists(node->key)) return;
	if(isEmpty()) head = node;
	else {
		Node *ptr = head;
		while(ptr->next != NULL) ptr = ptr->next;
		ptr->next = node;
	}
}

void LinkedList::preppend(Node* node) {
	if(isKeyExists(node->key)) return;
	if(isEmpty()) head = node;
	else {
		node->next = head;
		head = node;
	}
}

void LinkedList::insertAfter(int key, Node* node) {
	if(isKeyExists(node->key)) return;
	if(isKeyExists(key)) {
		Node *ptr = head;
		while(ptr->key != key) ptr = ptr->next;
		node->next = ptr->next;
		ptr->next = node;
	} else append(node);
}

void LinkedList::updateNode(int key, int newValue) {
	if(isKeyExists(key)) {
		Node *ptr = head;
		while(ptr->key != key) ptr = ptr->next;
		ptr->value = newValue;
	}
}

void LinkedList::deleteHead() {
	head = head->next;
}

void LinkedList::deleteTail() {
	Node* ptr = head;
	if(ptr->next == NULL) head = NULL;
	else {
		while(ptr->next->next != NULL) ptr = ptr->next;
		ptr->next = NULL;	
	}
}

void LinkedList::deleteNode(int key) {
	if(isKeyExists(key)) {
		if(head->key == key) head = NULL;
		else {
			Node *ptr = head;
			while(ptr->next->key != key) ptr = ptr->next;
			ptr->next = ptr->next->next;
		}
	}
}

void LinkedList::printList() {
	if(isEmpty()) cout << "List is Empty" << endl;
	else {
		Node *ptr = head;
		while(ptr) {
			cout << "(" << ptr->key << "," << ptr->value << ")-->";
			ptr = ptr->next;
		}		
		cout << endl;
	}
}
 
int main() {
	LinkedList ll;
	while(1) {
		cout << "-------Enter------" << endl;
		cout << "1.isEmpty" << endl;
		cout << "2.Append" << endl;
		cout << "3.Prepend" << endl;
		cout << "4.Insert After" << endl;
		cout << "5.Update Node" << endl;
		cout << "6.Delete Head" << endl;
		cout << "7.Delete Tail" << endl;
		cout << "8.Delete Node" << endl;
		cout << "9.Print List" << endl;
		cout << "0.Exit" << endl;
		int ch;
		cin >> ch;
		switch(ch) {
			case 0:
				break;
			case 1:
				if(ll.isEmpty()) cout << "List is Empty" << endl;
				else cout << "List is not Empty" << endl;
				break;
			case 2:
				{
					int key, value;
					cout << "Enter Key and Value: ";
					cin >> key >> value;
					Node *node = new Node(key, value);
					ll.append(node);
					break;
				}
			case 3:
				{
					int key, value;
					cout << "Enter Key and Value: ";
					cin >> key >> value;
					Node *node = new Node(key, value);
					ll.preppend(node);
					break;
				}
			case 4:
				{
					int key1, key2, value;
					cout << "Enter Key to inser after: ";
					cin >> key1;
					cout << "Enter Node Key and Value: ";
					cin >> key2 >> value;
					Node *node = new Node(key2, value);
					ll.insertAfter(key1, node);
					break;
				}
			case 5:
				{
					int key, value;
					cout << "Enter Key and new Value of Node: ";
					cin >> key >> value;
					ll.updateNode(key, value);
					break;
				}
			case 6:
				ll.deleteHead();
				break;
			case 7:
				ll.deleteTail();
				break;
			case 8:
				{
					int key;
					cout << "Enter Node key value to delete: ";
					cin >> key;
					ll.deleteNode(key);
					break;
				}
			case 9:
				ll.printList();
				break;
			default:
				cout << "Choose a valid option" << endl;
		}
		if(ch == 0) break;
	}
	
	return 0;
	
}

























