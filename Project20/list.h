#pragma once
#include"node.h"
class list {
public:
	node* head = new node;
	list();
	bool is_empty();
	void push(int value);
	void pop();
	void peek();
	int size();
	void display();
	~list();
};
