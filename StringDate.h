#pragma once
#include "Date.h"
class StringDate :
    public Date
{
public:
	StringDate(int day, int month, int year, int hour, int minute);
	StringDate();
	StringDate(const StringDate& obj);
	~StringDate();
	virtual char* ToString();
private:
	char* stringtime;
};

