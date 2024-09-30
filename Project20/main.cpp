#include<iostream>
#include"list.h"
using namespace std;
int main() {
	list* l = new list;
	l->push(5);
	l->push(15);
	l->push(25);
	l->pop();
	l->display();
	cout << l->size()<<endl;
	l->peek();
	return 0;
}
