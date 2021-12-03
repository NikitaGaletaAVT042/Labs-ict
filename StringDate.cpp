#include "StringDate.h"
#include <iostream>
StringDate::StringDate()
{
	setHour(0);
	setMinute(0);
	stringtime = ToString();
}

StringDate::StringDate(int day, int month, int year, int hour, int minute)
{
	try
	{
		if (hour < 24 && hour>0)
			setHour(hour);
		else
		{
			setHour(0);
			throw exception("Hour can not be set");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	try
	{
		if (day < 31 && day>0)
			setDay(day);
		else
		{
			setDay(0);
			throw exception("Minute can not be set");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	try
	{
		if (month < 13 && month>0)
			setMonth(month);
		else
		{
			setMonth(0);
			throw exception("Minute can not be set");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	try
	{
		if (minute < 61 && minute>0)
			setMinute(minute);
		else
		{
			setMinute(0);
			throw exception("Minute can not be set");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	setYear(year);
	stringtime = ToString();
}

StringDate::StringDate(const StringDate& ob)
{
	stringtime = ob.stringtime;
};

StringDate::~StringDate()
{
	delete[] stringtime;
}

char* StringDate::ToString()
{
	char* string = new char[255];
	if (getHour() < 13) {
		sprintf_s(string, 25, "%d:%d:%d %d:%d a.m.", getDay(), getMonth(), getYear(), getHour(), getMinute());
		return string;
	}
	if (getHour() > 13) {
		sprintf_s(string, 25, "%d:%d:%d %d:%d p.m.", getDay(), getMonth(), getYear(), getHour()%12, getMinute());
		return string;
	}
}

