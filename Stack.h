#pragma once
#include "Date.h"
#include <iostream>;
using std::cout;
class Stack
{	
public:
	Stack(Date date);
	~Stack();
	/*char* pop();*/
	void push(Date date);
	Date pop();
	Date findebyDay(int day);
	Date findebyMounth(int month);
	Date findebyYear(int year);
	Date findebyMinute(int minute);
	Date findebyHour(int hour);
	char* toString();

private:
	struct Node{
		Node(Date date) : date(date), next(NULL) {};
		Node* next;
		Date date;
	};
	Node* head;
	int length;
};

