#pragma once
#include <stdio.h>
#include <cmath>
#include <fstream> 
using namespace std;

#define filename_t "Output.txt"
#define filename_b "Output.dat"

class Date
{
public:
	static int a;
	Date(int day, int month, int year, int hour, int minute);
	Date();
	Date(const Date& obj);
	~Date();

	void addoneDay();
	void addoneMonth();
	void addoneYear();
	void addoneHour();
	void addoneMinute();

	void subtractoneDay();
	void subtractoneMonth();
	void subtractoneYear();
	void subtractoneHour();
	void subtractoneMinute();

	void setDay(int day);
	void setMonth(int mounth);
	void setYear(int year);
	void setHour(int hour);
	void setMinute(int minute);

	int getDay();
	int getMonth();
	int getYear();
	int getHour();
	int getMinute();


	virtual char* ToString();
	friend Date CheckingPlus(Date& obj)
	{
		if (obj.minute > 60) {
			obj.hour = obj.hour + obj.minute/60;
			obj.minute = obj.minute % 60;
		}
		if (obj.hour > 24) {
			obj.day = obj.day + obj.hour/24;
			obj.hour = obj.hour % 24;
		}
		if (obj.day > 30) {
			obj.month = obj.month + obj.day / 30;
			obj.day = obj.day % 30;
		}
		if (obj.month > 12) {
			obj.year = obj.year + obj.month/12;
			obj.month = obj.month % 12;
		}
		return obj;
	}

	friend Date CheckingMinus(Date& obj)
	{
		if (obj.minute < 0)
		{
			obj.minute = 60 - abs(obj.minute);
			obj.hour--;
		}
		if (obj.hour < 0)
		{
			obj.hour = 24 - abs(obj.hour);
			obj.day--;
		}
		if (obj.day < 0)
		{
			obj.day = 30 - abs(obj.day);
			obj.month--;
		}
		if (obj.month < 0)
		{
			obj.month = 12 - abs(obj.month);
			obj.year--;
		}
		return obj;
	}

	Date& operator = (const Date& ob) {
		day = ob.day;
		month = ob.month;
		minute = ob.minute;
		hour = ob.hour;
		year = ob.year;
		//strcpy_s(strin, 16, ob.strin);
		return *this;
	}

	friend Date operator + (const Date& obj1, const Date& obj2);
	Date operator + (int hour)
	{
		Date obj = *this;
		obj.year += hour / 8760;
		hour = hour % 8760;
		obj.month += hour / 730;
		hour = hour % 730;
		obj.day += hour / 24;
		day = day % 24;
		return CheckingPlus(obj);
	}

	friend Date operator - (const Date& obj1, const Date& obj2);
	Date operator - (int hour) {
		Date obj;
		obj.day = this->day - hour;
		obj.month = this->month - hour;
		obj.year = this->year - hour;
		obj.hour = this->hour - hour;
		obj.minute = this->minute - hour;
		obj.year += hour / 8760;
		hour = hour % 8760;
		obj.month += hour / 730;
		hour = hour % 730;
		obj.day += day / 24;
		hour = hour % 24;
		return CheckingMinus(obj);
	}

	operator char* () {
		return ToString();
	}

	friend ostream& operator <<(ostream& os, Date& obj);
	friend istream& operator >>(istream& is, Date& obj);

	void TextWrite(ofstream& file);
	Date TextRead(ifstream& file);

	void BinWrite(ofstream& file);
	Date BinRead(ifstream& file);

private:
	int day, month, year, hour, minute;


};