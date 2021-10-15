#pragma once
#include "Date.h"
#include "iostream"


class EventDate :
    public Date
{
public:
	EventDate(int day, int month, int year, int hour, int minute);
	EventDate();
	EventDate(const EventDate& obj);
	
	int getEventnumber();
	void setEventnumber(int Eventnumber);

	char* ToString() override;
private:
	int Eventnumber=0;
};

