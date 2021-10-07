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
	cout<<date1.ToString();
	cout << endl;
	try{
		date1.setYear(2005);
		date1.subtractionMinute();
		cout << date1.ToString();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	bool t = equal(date1, a);
	if (t == 1) {
	cout << "true" << endl;
		}
	else{ cout << "false" << endl; }
	cout << endl << endl;
}
void Test::Test2()
{
	cout << "Second test\n";
	int b[5] = { 4,3,2001, 3, 2 };
	Date date2(5, 4, 2002, 3, 3);
	cout << date2.ToString();
	cout << endl;
	try {
		date2.subtractionHour();
		date2.subtractionDay();
		date2.subtractionMonth();
		date2.subtractionYear();
		cout << date2.ToString();
	}
	catch(const char* msg) {
		cout << msg << endl;
	}
	bool t2 = equal(date2, b);
	if (t2 == 1) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	cout << endl << endl;
}
void Test::Test3()
{
	cout << "Third test\n";
	Date date3(13, 11, 2002, 8, 9);
	int c[5] = { 14,12,2003, 10, 9 };
	cout << date3.ToString();
	cout << endl;
	try {
		date3.setDay(50);
		date3.additionDay();
		date3.additionMonth();
		date3.additionYear();
		date3.additionMinute();
		cout << date3.ToString();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	bool t3 = equal(date3, c);
	if (t3 == 1) {
		cout << "true" << endl;
	}
	else{ cout << "false" << endl; }
	cout << endl << endl;
}
void Test::Test4()
{
	cout << "Fourth test\n";
	Date date4(1, 10, 2002, 59, 60);
	int d[5] = { 4,10,2003, 3, 12 };
	cout << date4.ToString();
	cout << endl;
	try {
		date4.additionMinute();
		date4.additionDay();
		date4.additionMonth();
		date4.additionYear();
		cout << date4.ToString();
	}
	catch (const char*  msg) {
		cout << msg << endl;
	}
	try {
		date4.subtractionDay();
		date4.subtractionMonth();
		date4.subtractionYear();
		date4.subtractionMinute();
		cout << date4.ToString();
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
	bool t4 = equal(date4, d);
	if (t4 == 1) {
		cout << "true" << endl;
	}
	else{ cout << "false" << endl; }
	cout << endl << endl;

}