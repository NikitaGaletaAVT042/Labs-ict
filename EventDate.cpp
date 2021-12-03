#include "EventDate.h"
#include <iostream>	
EventDate::EventDate()
{
	setHour(0);
	setMinute(0);
	setDay(0);
	setMonth(0);
	setYear(0);
	Eventstring = ToString();
	Event = new char[255];
	strcpy_s(Eventstring, 25, "no name");
}

EventDate::EventDate(int hour, int minute, int day, int month,int year, char* name)
{

	try
	{
		if (day < 30 && day>0)
			setDay(day);
		else
		{
			setDay(0);
			throw exception("Day unreal");
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
			throw exception("Month unreal");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	try
	{
		if (hour < 25 && hour>0)
			setHour(hour);
		else
		{
			setHour(0);
			throw exception("Hour unreal");
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
			throw exception("Minute unreal");
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	setYear(year);
	Eventstring= ToString();
	Event = new char[255];
	strcpy_s(Event, 25, name);
}

EventDate::EventDate(const EventDate& ob)
{
	Eventstring = ob.Eventstring;
	Event = ob.Event;
};

EventDate::~EventDate()
{
	delete[] Eventstring;
}

char* EventDate::GetEvent()
{
	return Event;
}

void EventDate::SetEvent(char* NameEvent)
{
	strcpy_s(this->Event, 25, NameEvent);
}

char* EventDate::ToString()
{
	char* string = new char[255];
	sprintf_s(string, 25, "%s %d:%d:%d %d:%d", Event , getDay(), getMonth(), getYear(), getHour(), getMinute());
	return string;
}