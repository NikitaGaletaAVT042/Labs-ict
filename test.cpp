#include "Test.h"
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
		date1.subtractoneMinute();
		cout << date1.ToString();
	}
	catch (exception msg) {
		t = true;
		cout << msg.what() << endl;
	}
	bool w = equal(date1, a);
	if ((w == 1) || (t == true)) {
	cout <<endl<<" true" << endl;
		}
	else{ cout <<endl<< "false" << endl; }
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
		date2.subtractoneHour();
		date2.subtractoneDay();
		date2.subtractoneMonth();
		date2.subtractoneYear();
		cout << date2.ToString();
	}
	catch(const char* msg) {
		t == true;
		cout << msg << endl;
	}
	bool t2 = equal(date2, b);
	if ((t2 == 1)||(t==true)) {
		cout << endl<<"true" << endl;
	}
	else {
		cout <<endl<< "false" << endl;
	}
	cout << endl << endl;
}
void Test::Test3()
{
	cout << "Third test\n";
	Date date3(13, 11, 2002, 8, 9);
	int c[5] = { 13,11,2002, 8, 9 };
	cout << date3.ToString();
	cout << endl;
	try {
		date3.setDay(50);
		date3.addoneDay();
		date3.addoneMonth();
		date3.addoneYear();
		date3.addoneMinute();
		cout << date3.ToString();
	}
	catch (exception msg) {
		t = true;
		cout<<msg.what() << endl;
	}
	bool t3 = equal(date3, c);
	if ((t3 == 1)||(t==true)) {
		cout << endl<<"true" << endl;
	}
	else{ cout <<endl << "false" << endl; }
	cout << endl << endl;
}

void Test::Test4()
{
	cout << "Fourth test\n";
	Date date4(1, 10, 2002, 59, 60);
	int d[5] = { 29,8,2001, 3, 12 };
	cout << date4.ToString();
	cout << endl;
	try {
		date4.addoneMinute();
		date4.addoneDay();
		date4.addoneMonth();
		date4.addoneYear();
		cout << date4.ToString();
	}
	catch (exception msg) {
		t = true;
		cout << msg.what() << endl;
	}
	try {
		date4.subtractoneDay();
		date4.subtractoneMonth();
		date4.subtractoneYear();
		date4.subtractoneMinute();
	}
	catch (const char* msg) {
		t = true;
		cout << msg << endl;
	}
	bool t4 = equal(date4, d);
	if ((t4 == 1) || (t == true)) {
		cout << endl << "true" << endl;
	}
	else {
		cout << endl << "false" << endl;
		cout << endl << endl;
	}
}

void Test::Test5()
{
	cout <<endl<< "Fivth test\n";
	const char* c = "Ñoncert";
	char ch[255] = "Theatre  2002:10:1 0:60";
	const char* e = "Theatre";
	EventDate date5(c, 1, 10, 2002, 59, 60);
	date5.setEventname(e);
	char* m = date5.ToString();
	cout << date5.ToString()<<endl;
	if (strcmp(m,ch)!=0){
		cout << "False" << endl;
	}
	else {
		cout << "True" << endl;
	}
}

void Test::Test6()
{
	cout << endl << "Sixth test\n";
	char ch[255] = "2002:10:1 11:60 pm";
	char ct[255] = "2002:10:1 9:60 am";
	StringDate date6(1, 10, 2002, 23, 60);
	StringDate date7(1, 10, 2002, 9, 60);
	char* m1= date6.ToString();
	char* m2= date7.ToString();
	cout << date6.ToString() << endl;
	if (strcmp(m1, ch) != 0) {
		cout << "False" << endl;
	}
	else {
		cout << "True" << endl;
	}
	cout << date7.ToString() << endl;
	if (strcmp(m2, ct) != 0) {
		cout << "False" << endl;
	}
	else {
		cout << "True" << endl;
	}
}
