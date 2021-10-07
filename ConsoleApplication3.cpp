
#include <iostream>
#include "Date.h"
#include "Test.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Test t = Test();
	t.Test1();
	t.Test2();
	t.Test3();
	t.Test4();
	char ch;
	std::cin >> ch;
}