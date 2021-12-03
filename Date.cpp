#include "Date.h"
#include <iostream>
#include <stdio.h>

Date::Date() {
	a++;
	day = 0;
	if (day < 0) {
		day = day * -1;
	}
	month = 0;
	if (month < 0) {
		month = month * -1;
	}
	year = 0;
	hour = 0;
	if (hour < 0) {
		hour = hour * -1;
	}
	minute = 0;
	if (minute < 0) {
		minute = minute * -1;
	}
	strin = new char[256];
}
Date::Date(int day, int month, int year, int hour, int minute) {
	if ((day < 31) && (day > 0)) {
		this->day = day;
	}
	else {
		this->day = 1;
	}
	if ((month < 13) && (month > 0)) {
		this->month = month;
	}
	else {
		this->month = 1;
	}
	this->year = year;
	if ((minute < 61) && (minute > 0)) {
		this->minute = minute;
	}
	else {
		this->minute = 0;
	}
	if ((hour < 25) && (hour > 0)) {
		this->hour = hour;
	}
	else {
		this->hour = 0;
	}
	a++;
}
Date::Date(const Date& date) {//конструктор копирования
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	this->minute = date.minute;
	this->hour = date.hour;
	a++;
}


Date::~Date()
{
	delete [] strin;
}


void Date::addoneDay()
{
	try {
		if (day + 1 >= 30) { month++; throw day = 1; }
		else (day++);
	}
	catch(int day){
		this->day = day;
	}
}
void Date::addoneMonth()
{
	try {
		if (month + 1 >= 12) { year++; throw month = 1; }
		else (month++);
	}
	catch (int month) {
		this->month = month;
	}
}
void Date::addoneYear()
{
	year++;
}
void Date::addoneHour()
{
	try {
		if (hour + 1 >= 24) { day++; throw hour = 1; }
		else (hour++);
	}
	catch (int hour) {
		this->hour = hour;
	}
}
void Date::addoneMinute()
{
	try {
		if (minute + 1 >= 60) { hour++; throw minute = 1; }
		else (minute++);
	}
	catch (int minute) {
		this->minute = minute;
	}

}


void Date::subtractoneDay()
{
	try {
		if (day - 1 < 1) { month--; throw day = 30; }
		else (day--);
	}
	catch (int day) {
		this->day = day;
	}
}
void Date::subtractoneMonth()
{
	try {
		if (month - 1 < 1) { year--; throw month = 12; }
		else (month--);
	}
	catch (int month) {
		this->month = month;
	}
}
void Date::subtractoneYear()
{
	year--;
}
void Date::subtractoneHour()
{
	try {
		if (hour - 1 < 0) { day--; throw hour = 24; }
		else (hour--);
	}
	catch (int hour) {
		this->hour = hour;
	}
}
void Date::subtractoneMinute()
{
	try {
		if (minute - 1 < 0) { hour--; throw minute = 60; }
		else (minute--);
	}
	catch (int minute) {
		this->minute = minute;
	}

}


void Date::setDay(int day)
{

	if (day > 30 || day < 1)throw exception("ERROR");
	this->day = day;
}
void Date::setMonth(int month)
{
	if (month > 13 || month < 1) throw exception("ERROR");
	this->month = month;
}
void Date::setYear(int year)
{
	this->year = year;
}
void Date::setHour(int hour)
{
	if (hour > 24 || hour < 0) throw exception("ERROR");
	this->hour = hour;
}
void Date::setMinute(int minute)
{
	if (minute > 60 || minute < 0) throw exception ("ERROR"); 
	this->minute = minute; 
}


int Date::getDay()
{
	return day;
}
int Date::getMonth()
{
	return month;
}
int Date::getYear()
{
	return year;
}
int Date::getHour()
{
	return hour;
}
int Date::getMinute()
{
	return minute;
}


char* Date::ToString()
{
	sprintf_s(strin, 25, "%d:%d:%d %d:%d", year, month, day, hour, minute );
	return strin;
}

void Date::TextWrite(const char* filename)
{

	ofstream out(filename, ios::app);

	if (!out) {
		cerr << "File not open" << endl;
		exit(1);
	}

	out << *this;
	out.close();
 
}

Date Date::TextRead(int index, const char* filename)
{

	ifstream in(filename, ios::in);

	if (!in) {
		cerr << "File not open" << endl;
		exit(1);
	}

	Date nDate;

	for (int i = 1; i <= index; i++) {
		in >> nDate;
	}

	in.close();
	return nDate;
}

void Date::BinWrite(const char* filename)
{

	ofstream out(filename, ios::app | ios::binary);

	if (!out) {
		cerr << "File not open" << endl;
		exit(1);
	}

	out << *this;
	out.close();

}

Date Date::BinRead(int index, const char* filename)
{
	ifstream in(filename, ios::in | ios::binary);

	if (!in) {
		cerr << "File not open" << endl;
		exit(1);
	}

	Date nDate;

	for (int i = 1; i <= index; i++) {
		in >> nDate;
	}

	in.close();
	return nDate;
}

int Date::a = 0;

Date operator + (const Date& obj1, const Date& obj2) {
	Date obj;
	obj.day = obj1.day + obj2.day;
	obj.month = obj1.month + obj2.month;
	obj.year = obj1.year + obj2.year;
	obj.hour = obj1.hour + obj2.hour;
	obj.minute = obj1.minute + obj2.minute;
	return CheckingPlus(obj);
}

Date operator - (const Date& obj1, const Date& obj2) {
	Date obj;
	obj.day = obj1.day - obj2.day;
	obj.month = obj1.month - obj2.month;
	obj.year = obj1.year - obj2.year;
	obj.hour = obj1.hour - obj2.hour;
	obj.minute = obj1.minute - obj2.minute;
	return CheckingMinus(obj);
}

ostream& operator <<(ostream& os, const Date& obj) {
	os << obj.year << " " << obj.month << " " << obj.day << " " << obj.hour << " " << obj.minute << "\n";
	return os;
}

istream& operator >>(istream& is, Date& obj)
{
	is >> obj.year >> obj.month >> obj.day >> obj.hour >> obj.minute;
	return is;
}
