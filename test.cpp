#include "Test.h"
#include <cassert>
#include "ConsoleApplication3/catch.hpp"

//bool equal(Date& date, int a[5]) {
//	int i = 0;
//	bool k = false;
//	if ((a[0] == date.getDay()) && (a[1] == date.getMonth()) && (a[2] == date.getYear()) && (a[3] == date.getMinute()) && ((a[4] == date.getHour()))) {
//		k = true;
//	}
//	return k;
//}
//
//void Test::Test1()
//{
//	cout << "First test\n";
//	int a[5] = { 3,7,2005, 34, 21 };
//	Date date1(3, 7, 2221, 21, 35);
//	cout<<date1.ToString();
//	cout << endl;
//	try{
//		date1.setYear(2005);
//		date1.subtractoneMinute();
//		cout << date1.ToString();
//	}
//	catch (exception msg) {
//		t = true;
//		cout << msg.what() << endl;
//	}
//	bool w = equal(date1, a);
//	if ((w == 1) || (t == true)) {
//	cout <<endl<<" true" << endl;
//		}
//	else{ cout <<endl<< "false" << endl; }
//	cout << endl << endl;
//
//}
//void Test::Test2()
//{
//	cout << "Second test\n";
//	int b[5] = { 4,3,2001, 3, 2 };
//	Date date2(5, 4, 2002, 3, 3);
//	cout << date2.ToString();
//	cout << endl;
//	try {
//		date2.subtractoneHour();
//		date2.subtractoneDay();
//		date2.subtractoneMonth();
//		date2.subtractoneYear();
//		cout << date2.ToString();
//	}
//	catch(const char* msg) {
//		t = true;
//		cout << msg << endl;
//	}
//	bool t2 = equal(date2, b);
//	if ((t2 == 1)||(t==true)) {
//		cout << endl<<"true" << endl;
//	}
//	else {
//		cout <<endl<< "false" << endl;
//	}
//	cout << endl << endl;
//}
//void Test::Test3()
//{
//	cout << "Third test\n";
//	Date date3(13, 11, 2002, 8, 9);
//	int c[5] = { 13,11,2002, 8, 9 };
//	cout << date3.ToString();
//	cout << endl;
//	try {
//		date3.setDay(50);
//		date3.addoneDay();
//		date3.addoneMonth();
//		date3.addoneYear();
//		date3.addoneMinute();
//		cout << date3.ToString();
//	}
//	catch (exception msg) {
//		t = true;
//		cout<<msg.what() << endl;
//	}
//	bool t3 = equal(date3, c);
//	if ((t3 == 1)||(t==true)) {
//		cout << endl<<"true" << endl;
//	}
//	else{ cout <<endl << "false" << endl; }
//	cout << endl << endl;
//}
//
//void Test::Test4()
//{
//	cout << "Fourth test\n";
//	Date date4(1, 10, 2002, 59, 60);
//	int d[5] = { 29,8,2001, 3, 12 };
//	cout << date4.ToString();
//	cout << endl;
//	try {
//		date4.addoneMinute();
//		date4.addoneDay();
//		date4.addoneMonth();
//		date4.addoneYear();
//		cout << date4.ToString();
//	}
//	catch (exception msg) {
//		t = true;
//		cout << msg.what() << endl;
//	}
//	try {
//		date4.subtractoneDay();
//		date4.subtractoneMonth();
//		date4.subtractoneYear();
//		date4.subtractoneMinute();
//	}
//	catch (const char* msg) {
//		t = true;
//		cout << msg << endl;
//	}
//	bool t4 = equal(date4, d);
//	if ((t4 == 1) || (t == true)) {
//		cout << endl << "true" << endl;
//	}
//	else {
//		cout << endl << "false" << endl;
//		cout << endl << endl;
//	}
//}
//
///*void Test::Test5()
//{
//	cout <<endl<< "Fivth test\n";
//	const char* c = "Ñoncert";
//	char ch[255] = "Theatre  2002:10:1 0:60";
//	const char* e = "Theatre";
//	EventDate date5(c, 1, 10, 2002, 59, 60);
//	date5.SetEvent(e);
//	char* m = date5.ToString();
//	cout << date5.ToString() << endl;
//	if (strcmp(m,ch)!=0){
//		cout << "False" << endl;
//	}
//	else {
//		cout << "True" << endl;
//	}
//}
//*/
//
//void Test::Test6()
//{
//	cout << endl << "Sixth test\n";
//	char c[255] = "Ñoncert";
//	char ch[255] = "Theatre 10:2:1222 2:2";
//	char e[255] = "Theatre";
//	EventDate date5(2, 2, 10, 2, 1222, c);
//	date5.SetEvent(e);
//	char* m = date5.ToString();
//	cout << m << endl;
//	char ce[255] = "1:10:2002 11:11 p.m.";
//	char ct[255] = "1:10:2002 9:15 a.m.";
//	StringDate date6(1, 10, 2002, 23, 11);
//	StringDate date7(1, 10, 2002, 9, 15);
//	char* m1 = date6.ToString();
//	char* m2 = date7.ToString();
//	cout << date6.ToString() << endl;
//	cout << date7.ToString() << endl;
//
//	if ((strcmp(m1, ce) != 0) || ((strcmp(m2, ct) != 0)||((strcmp(m, ch) != 0)))) {
//		cout << "False" << endl;
//	}
//	else {
//		cout << "True" << endl;
//	}
//}
//
//void Test::Test7()
//{
//	cout << endl << "Seventh test\n";
//	char ch[255] = "2002:10:1 9:60 am";
//	StringDate date7(1, 10, 2002, 9, 60);
//	Date &date6=date7;
//	char* m1 = date6.ToString();
//	cout << date6.ToString() << endl;
//	if (strcmp(m1, ch) != 0) {
//		cout << "False" << endl;
//	}
//	else {
//		cout << "True" << endl;
//	}
//}
//
//void Test::Test8()
//{
//	cout << endl << "Eigth test\n";
//	char ch[255] = "2018:1:1 4:14->1759:6:5 3:43->2002:10:8 9:60->";
//	Date date1(1, 1, 2018, 4, 14);
//	Date date2(5, 6, 1759, 3, 43);
//	Date date3(8, 10, 2002, 9, 60);
//	Date date4(4, 2, 2003, 6, 5);
//	Stack stack(date1);
//	stack.push(date2);
//	stack.push(date3);
//	stack.push(date4);
//	cout << stack.toString() << endl;
//	cout << "last el: \t" << stack.pop() << "\n";
//	cout << stack.toString() << endl;
//	cout << stack.findebyYear(2018).ToString() << endl;
//	char* m = stack.toString();
//	if (m==ch) {
//		cout << "False" << endl;
//	}
//	else {
//		cout << "True" << endl;
//	}
//
//}
//	
//void Test::Test9() {
//	Date date1(1, 2, 3, 4, 5);
//	Date date2(5, 4, 3, 2, 1);
//	Date date3 = date1 + date2;
//	cout << date1.ToString() << endl;
//	cout << date2.ToString() << endl;
//	cout << date3.ToString() << endl;
//	assert(date3.getDay() == 6);
//	assert(date3.getMonth() == 6);
//	assert(date3.getYear() == 6);
//	assert(date3.getHour() == 6);
//	assert(date3.getMinute() == 6);
//	cout << "Tests complete" << endl;
//}
//void Test::Test10() {
//	Date date1(9, 8, 7, 6, 5);
//	Date date2(5, 4, 3, 2, 1);
//	Date date3 = date1 - date2;
//	cout << date1.ToString() << endl;
//	cout << date2.ToString() << endl;
//	cout << date3.ToString() << endl;
//	assert(date3.getDay() == 4);
//	assert(date3.getMonth() == 4);
//	assert(date3.getYear() == 4);
//	assert(date3.getHour() == 4);
//	assert(date3.getMinute() == 4);
//	cout << "Tests complete" << endl;
//}
//void Test::Test11() {
//	Date date1(7, 8, 2, 3, 4);
//	Date date2(4, 5, 6, 7, 8);
//	cout << date2.ToString() << endl;
//	cout << date1.ToString() << endl;
//	Date date3 = date1 = date2;
//	cout << date3.ToString() << endl;
//	assert(date3.getDay() == 4);
//	assert(date3.getMonth() == 5);
//	assert(date3.getYear() == 6);
//	assert(date3.getHour() == 7);
//	assert(date3.getMinute() == 8);
//	cout << "Tests complete" << endl;
// }
//
//void Test::Test12() {
//
//	Date date1(1, 1, 2018, 4, 14);
//	Date date2(5, 6, 1759, 3, 43);
//	Date date3(8, 10, 2002, 9, 60);
//	Date date4(4, 2, 2003, 6, 5);
//
//	
//
//	/*Date date5;
//	cin >> date5;
//	cout << date5;
//
//
//	date5.TextWrite();*/
//
//	Date date6 = Date::TextRead();
//	cout << date6;
//
//	Date date7 = Date::TextRead(3);
//	cout << date7;
//
//	Date date8 = Date::TextRead(7);
//	cout << date8;
//
//	date2.BinWrite();
//	Date date9 = Date::BinRead();
//	cout << date9;
//}
//
//TEST_CASE("Test 13")
//{
//	TStack<int> s1;
//	s1.push(2);
//	s1.push(-9);
//	s1.push(0);
//	s1.push(123);
//	cout << s1.to_string();
//
//	s1.pop();
//	REQUIRE(strcmp(s1.to_string(), "2  -9  0"));
//
//}


TEST_CASE("PLUS")
{
	Date date4(6, 6, 6, 6, 6);
	Date date1(1, 2, 3, 4, 5);
	Date date2(5, 4, 3, 2, 1);
	Date date3 = date1 + date2;
	cout << date1.ToString() << endl;
	cout << date2.ToString() << endl;
	cout << date3.ToString() << endl;
}