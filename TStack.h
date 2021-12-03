#include <iostream>
#pragma once
template <class T> struct TStack
{

	struct Node {

		Node(T v) {
			value = v;
			next = nullptr;
		}

		~Node() {
			delete next;
		}

		Node* next;
		T value;
	};

public:

	TStack() {
		head = nullptr;
		length = 0;
	}

	void push(T v);
	T pop();
	char* to_string();


private:


	Node* head;
	int length;

};

template<class T>
inline void TStack<T>::push(T v)
{
	Node* p = new Node(v);
	Node* ptr = head;
	if (head == NULL) {
		head = p;
		//last = p;
		return;
	}
	//last->next = p;
	//last = p;

	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = p;
	length++;
}

template<class T>
inline T TStack<T>::pop()
{
	Node* ptr = head;

	while (ptr->next != NULL) {
		ptr = ptr->next;
	}

	T val;
	val = ptr->value;
	delete ptr;
	//ptr = NULL;
	length--;

	return val;
}

template<class T>
inline char* TStack<T>::to_string()
{
	if (head == NULL) throw "Empty list";
	Node* p = head;
	char* str = new char[512];
	str[0] = '\0';
	int i = 0;
	while (i < length+1) {
		/*strcat_s(str, 512, p->date.ToString());
		strcat_s(str, 512, "   ->   ");*/
		std::cout << p->value << "  ";
		p = p->next;
		i++;
	}
	std::cout << "\n";
	return str;
}
