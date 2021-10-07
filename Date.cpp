#include "Date.h"
#include <iostream>
#include <stdio.h>

Date::Date() {
	day = 0;
	month = 0;
	year = 0;
	hour = 0;
	minute = 0;
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
}
Date::Date(const Date& date) {//конструктор копирования
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	this->minute = date.minute;
	this->hour = date.hour;
}


Date::~Date()
{
	cout << "Memory is cleared" << std::endl;
}


void Date::additionDay()
{
	if (day+1 >= 30) throw "ERROR";
	else{day++; }
}
void Date::additionMonth()
{
	if (month+1 > 12) throw  "ERROR";
	month++;
}
void Date::additionYear()
{
	year++;
}
void Date::additionHour()
{
	if (hour+1 > 24) throw "ERROR";
	hour++;
}
void Date::additionMinute()
{
	if (minute+1 > 60) throw "ERROR";
	minute++;

}


void Date::subtractionDay()
{
	if (day - 1 < 1) {
		setMonth(month - 1);
		day = 29;
	}
	else {
		day--;
	}
}
void Date::subtractionMonth()
{
	if (month - 1 < 1) {
		setYear(year - 1);
		month = 59;
	}
	else { month--; }
}
void Date::subtractionYear()
{
	year--;
}
void Date::subtractionHour()
{
	if (hour - 1 < 0) {
		setDay(day - 1);
		hour = 23;
	}
	else{hour--;
}
}
void Date::subtractionMinute()
{
	//if (minute <= 0) throw "ERROR"
	if (minute - 1 < 0) {
		setHour(hour-1);
		minute = 59;
	}
	else {
		minute--;
	}

}


void Date::setDay(int day)
{

	if (day > 30 || day < 1) throw "ERROR";
	this->day = day;
}
void Date::setMonth(int month)
{
	if (month > 13 || month < 1) throw  "ERROR"; 
	this->month = month;
}
void Date::setYear(int year)
{
	this->year = year;
}
void Date::setHour(int hour)
{
	if (hour > 24 || hour < 0) throw "ERROR";
	this->hour = hour;
}
void Date::setMinute(int minute)
{
	if (minute > 60 || minute < 0) throw "ERROR"; 
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
	int date1[] = { day,month,year,minute,hour };
	char string[1000] = "";
	char helped[12];
	for (int i = 0; i < 5; i++) {
		sprintf_s(helped, sizeof(helped), "%d", date1[i]);
		strcat_s(string, sizeof(string), helped);
		strcat_s(string, sizeof(string), " ");
	}
	return string;
}
