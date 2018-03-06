#pragma once

using namespace System;
ref class DateAndTime
{
public:
	DateAndTime(Decimal , Decimal , Decimal , Decimal , Decimal , Decimal );
	int calculateTime(int, int, int);
	void calculateDate(int, int, int, int);
	bool isLeap(int);
	int get(String^);
private:
	int year, month, day, hour, minute, second;
};

