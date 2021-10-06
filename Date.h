#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class Date
{
public:
	static int a;
	Date(int day, int month, int year, int hour, int minute);
	Date();
	Date(const Date& obj);
	~Date();

	void additionDay();
	void additionMonth();
	void additionYear();
	void additionHour();
	void additionMinute();

	void subtractionDay();
	void subtractionMonth();
	void subtractionYear();
	void subtractionHour();
	void subtractionMinute();

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


	void checkadditionDate();
	void checksubtractionDate();

	void Cout();
	char* ToString();

private:
	int day, month, year, hour, minute;
};