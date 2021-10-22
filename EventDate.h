#pragma once
#include "Date.h"
#include "iostream"


class EventDate :
    public Date
{
public:
	EventDate(const char* Eventnumber, int day, int month, int year, int hour, int minute);
	EventDate();
	EventDate(const EventDate& obj);
	
	const char* getEventname();
	void setEventname(const char* Eventname);


	char* ToString() override;
private:
	const char* Eventname;
};

