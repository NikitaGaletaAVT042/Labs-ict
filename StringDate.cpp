#include "StringDate.h"

StringDate::StringDate(int day, int month, int year, int hour, int minute):Date(day, month, year, hour, minute)
{
}

StringDate::StringDate() : Date()
{
}

StringDate::StringDate(const StringDate& obj):Date(obj)
{
}

char* StringDate::ToString()
{
	int m = getHour();
	char* string = new char[255];
	if (m > 12) {
		sprintf_s(string, 25, "%d:%d:%d %d:%d pm", getYear(), getMonth(), getDay(), getHour()-12, getMinute());
	}
	else {
		sprintf_s(string, 25, "%d:%d:%d %d:%d am", getYear(), getMonth(), getDay(), getHour(), getMinute());
	}
	return string;
}
