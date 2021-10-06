#include "Test.h"
#include "Date.h"
#include <iostream>
#include <cassert>
using namespace std;
bool equal(Date& date, int a[5]) {
	int i = 0;
	bool k = false;
	if ((a[0] == date.getDay()) && (a[1] == date.getMonth()) && (a[2] == date.getYear()) && (a[3] == date.getMinute()) && ((a[4] == date.getHour()))) {
		k = true;
	}
	return k;
}
void Test::Test1()
{
	cout << "First test\n";
	int a[5] = { 3,7,2005, 34, 21 };
	Date date1(3, 7, 2221, 21, 35);
	date1.Cout();
	cout << endl;
	date1.setYear(2005);
	date1.subtractionMinute();
	date1.Cout();
	bool t = equal(date1, a);
	if (t == 1) {
		cout << "true" << endl;
	}
	cout << endl << endl;
}
void Test::Test2()
{
	cout << "Second test\n";
	int b[5] = { 4,3,2001, 3, 2 };
	Date date2(5, 4, 2002, 3, 3);
	date2.Cout();
	cout << endl;
	date2.subtractionHour();
	date2.subtractionDay();
	date2.subtractionMonth();
	date2.subtractionYear();
	date2.Cout();
	bool t2 = equal(date2, b);
	if (t2 == 1) {
		cout << "true" << endl;
	}
	cout << endl << endl;
}
void Test::Test3()
{
	cout << "Third test\n";
	Date date3(13, 11, 2002, 8, 9);
	int c[5] = { 14,12,2003, 10, 9 };
	date3.Cout();
	cout << endl;
	date3.additionHour();
	date3.additionDay();
	date3.additionMonth();
	date3.additionYear();
	date3.additionMinute();
	date3.Cout();

	bool t3 = equal(date3, c);
	if (t3 == 1) {
		cout << "true" << endl;
	}
	cout << endl << endl;
	char ch;
	std::cin >> ch;
}