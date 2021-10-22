#include "EventDate.h"
using std::cout;
using std::endl;

EventDate::EventDate(const char* Eventname, int day, int month, int year, int hour, int minute) : Date(day, month, year, hour, minute)
{
	this->Eventname = Eventname;
}

EventDate::EventDate() : Date()
{
	this->Eventname = Eventname;
}

EventDate::EventDate(const EventDate& obj):Date(obj)
{
	this->Eventname = Eventname;
}

const char* EventDate::getEventname()
{
	int length = strlen(Eventname) + 1;
	char* temp = new char[length];
	strcpy_s(temp,length,Eventname);
	return temp;
}

void EventDate::setEventname(const char* Eventname)
{
	this->Eventname = Eventname;
}



char* EventDate::ToString()
{
	sprintf_s(strin, 25, "%s  %d:%d:%d %d:%d", getEventname(), getYear(), getMonth(), getDay(), getHour(), getMinute());
	int m_length = strlen(strin) + 1;
	char* m_strin = new char[m_length];
	strcpy_s(m_strin, m_length, strin);
	return m_strin;
}
