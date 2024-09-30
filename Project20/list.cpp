#include<iostream>
#include"node.h"
#include"list.h"
using namespace std;
list::list(){
	head->data = 0;
	head->next = NULL;
}
list::~list() {
	/*node* a, * b;
	a = head;
	b = a->next;
	if (a != NULL) {
		a = b;
		cout << "distructor has been called" << endl;
	}*/
}
bool list::is_empty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}
//insertion operation
void list::push(int value) {
	if (is_empty()) {
		node* temp;
		temp = head;
		temp->data = value;
		temp->next = NULL;
		
	}
	else {
		node* newNode=new node;
		newNode->data = value;
		newNode->next = head;
		head = newNode;

	}

}
void list::pop() {
	if (is_empty()) {
		cout << "no element present" << endl;
	}
	/*else {
		node* temp = new node;
		temp = head;
		node* del_node;
		del_node = temp;
		delete del_node;



	}*/
}
//to check the value on the top
void list::peek() {
	node* temp = head;
	cout << "peek value is " << temp->data << endl;

}
//to display the size
int list::size() {
	node* temp = new node;
	temp = head;
	while (temp != NULL) {
		temp = temp->next;
	}
	return sizeof(temp);
	 
}
//to display the list
void list::display() {
	node* temp = new node;
	temp = head;
	while (temp != NULL) {
		cout << temp->data << " -> ";
			temp = temp->next;
	}
	cout << "NULL" << endl;
}
