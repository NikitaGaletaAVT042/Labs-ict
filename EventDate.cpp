#include "EventDate.h"
using std::cout;
using std::endl;

EventDate::EventDate(int day, int month, int year, int hour, int minute) : Date(day, month, year, hour, minute)
{
	Eventnumber++;
}

EventDate::EventDate() : Date()
{
	Eventnumber++;
}

EventDate::EventDate(const EventDate& obj):Date(obj)
{
	Eventnumber++;
}

int EventDate::getEventnumber()
{
	return Eventnumber;
}

void EventDate::setEventnumber(int Eventnumber)
{
	this->Eventnumber = Eventnumber;
}

char* EventDate::ToString()
{
	char* string = new char[255];
	sprintf_s(string, 25, "Event ¹%d %d:%d:%d %d:%d",Eventnumber, getYear(), getMonth(), getDay(), getHour(), getMinute());
	k = string;
	return string;
}
