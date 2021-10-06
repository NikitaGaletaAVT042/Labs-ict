#include "Date.h"
#include <iostream>
#include <stdio.h>

Date::Date() {//���������� �����������
	day = 0;
	month = 0;
	year = 0;
	hour = 0;
	minute = 0;
}
Date::Date(int day, int month, int year, int hour, int minute) {//����������� � ����������� 
	if ((day < 31) && (day > 0)) {
		this->day = day;
	}
	else {
		day = 1;
	}
	if ((month < 13) && (month > 0)) {
		this->month = month;
	}
	else {
		month = 1;
	}
	this->year = year;
	if ((minute < 61) && (minute > 0)) {
		this->minute = minute;
	}
	else {
		minute = 0;
	}
	if ((hour < 25) && (hour > 0)) {
		this->hour = hour;
	}
	else {
		hour = 0;
	}
}
Date::Date(const Date& date) {//����������� �����������
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	this->minute = date.minute;
	this->hour = date.hour;
}


Date::~Date()//����������
{
	cout << "Memory is cleared" << std::endl;
}


void Date::additionDay()//������� ���������� ������� � �������� ����
{
	day++;
	this->day = day;
}
void Date::additionMonth()//������� ���������� ������� �  �������� �������
{
	month++;
	this->month = month;
}
void Date::additionYear()//������� ���������� ������� � �������� �����
{
	year++;
	this->year = year;
}
void Date::additionHour()//������� ���������� ������� � ������� �����
{
	hour++;
	this->hour = hour;
}
void Date::additionMinute()//������� ���������� ������� � ������� �����
{
	minute++;
	this->minute = minute;

}


void Date::subtractionDay()//������� ��������� ������� �� �������� ����
{
	day--;
}
void Date::subtractionMonth()//������� ��������� ������� �� �������� ����
{
	month--;
}
void Date::subtractionYear()//������� ��������� ������� �� �������� �����
{
	year--;
}
void Date::subtractionHour()//������� ��������� ������� �� �������� �����
{
	hour--;
}
void Date::subtractionMinute()//������� ��������� ������� �� �������� �����
{
	minute--;
}


void Date::setDay(int day)
{

	if (day > 30 || day < 0) { cout << "ERROR"; }
	else { this->day = day; }
}
void Date::setMonth(int month)
{
	if (month > 13 || month < 0) { cout << "ERROR"; }
	else { this->month = month; }
}
void Date::setYear(int year)
{
	this->year = year;
}
void Date::setHour(int hour)
{
	if (hour > 24 || hour < 0) { cout << "ERROR"; }
	else { this->hour = hour; }
}
void Date::setMinute(int minute)
{
	if (minute > 0 || minute < 0) { cout << "ERROR"; }
	else { this->minute = minute; }
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

void Date::Cout() {//������� ������ �� �����
	cout << ToString();
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
