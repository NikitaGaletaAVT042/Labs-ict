#include "Stack.h"


Stack::Stack(Date date)
{
    head = new Node(date);
    length = 1;
}

Stack::~Stack()
{
    Node* ptr = head->next;

    for (int i = 0; i < length - 1; i++) {
        Node* n = ptr->next;
        delete ptr;
        ptr = n;
        n = n->next;
    }
    delete head;
}




void Stack::push(Date date)
{
    Node* p = new Node(date);
    Node* ptr = head;
    if (head == NULL) {
        head = p;
        return;
    }
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = p;
    length++;
}

Date Stack::pop()
{
    Node* ptr = head;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    
    Date date;
    date = ptr->date;
    delete ptr;
    length--;

    return date;
}





Date Stack::findebyDay(int day)
{
    if (head == NULL) throw exception("Empty list");
    Node* p = head;
    while (p) {
        if(p->date.getDay()==day){
            return p->date;
        }
        p = p->next;
    }
    return Date();
}
Date Stack::findebyMounth(int month)
{
    if (head == NULL) throw exception("Empty list");
    Node* p = head;
    while (p) {
        if (p->date.getMonth() == month) {
            return p->date;
        }
        p = p->next;
    }
    return Date();
}
Date Stack::findebyYear(int year)
{
    if (head == NULL) throw exception("Empty list");
    Node* p = head;
    while (p) {
        if (p->date.getYear() == year) {
            return p->date;
        }
        p = p->next;
    }
    return Date();
}
Date Stack::findebyMinute(int minute)
{
    if (head == NULL) throw exception ("Empty list");
    Node* p = head;
    while (p) {
        if (p->date.getMinute() == minute) {
            return p->date;
        }
        p = p->next;
    }
    return Date();
}
Date Stack::findebyHour(int hour)
{
    if (head == NULL) throw exception("Empty list");
    Node* p = head;
    while (p) {
        if (p->date.getHour() == hour) {
            return p->date;
        }
        p = p->next;
    }
    return Date();
}

char* Stack::toString() {
    if (head==NULL) throw "Empty list";
    Node* p = head;
    char* str = new char[512];
    str[0] = '\0';
    int i = 0;
    while (i < length) {
        strcat_s(str,512,p->date.ToString());
        strcat_s(str,512,"   ->   ");
        p = p->next;
        i++;
    }
    return str;
}