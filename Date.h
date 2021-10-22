#pragma once
#include <stdio.h>
#include <cmath>
#include <fstream> 
using namespace std;

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
private:
	int day, month, year, hour, minute;
protected:
	char* strin = new char[255];
};