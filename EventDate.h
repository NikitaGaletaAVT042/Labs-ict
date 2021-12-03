#pragma once
#include "Date.h"
class EventDate : public Date
{
public:
	EventDate();
	EventDate(int hour, int minute,int day, int month, int year, char* name);
	EventDate(const EventDate& ob);
	~EventDate();
	char* ToString();
	char* GetEvent();
	void SetEvent(char* NameEvent);
private:
	char* Eventstring;
	char* Event;
};