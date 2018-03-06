#include "DateAndTime.h"
#include <iostream>



DateAndTime::DateAndTime(Decimal y, Decimal m, Decimal d,
	Decimal h, Decimal min, Decimal s)
{
	year = Decimal::ToInt32(y);
	month = Decimal::ToInt32(m);
	day = Decimal::ToInt32(d);
	hour = Decimal::ToInt32(h);
	minute = Decimal::ToInt32(min);
	second = Decimal::ToInt32(s);
}

int DateAndTime::calculateTime(int h, int m, int s)
{
	int temp;
	temp = s + second;
	second = (temp % 60 < 0) ? temp % 60 + 60 : temp % 60;
	m = m + (temp - second) / 60;
	temp = m + minute;
	minute = (temp % 60 < 0) ? temp % 60 + 60 : temp % 60;
	h = h + (temp - minute) / 60;
	temp = h + hour;
	hour = (temp % 24 < 0) ? temp % 24 + 24 : temp % 24;
	return (temp - hour) / 24;
}

void DateAndTime::calculateDate(int y, int m, int d, int remainday) {
	array<int>^ monthNonLeap = gcnew array<int>{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	array<int>^ monthLeap = gcnew array<int>{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int temp = d + remainday + day;
	array<int>^ monthArray;
	if (temp > 0) {
		while (true) {
			monthArray = isLeap(year) ? monthLeap : monthNonLeap;
			if (temp <= monthArray[month - 1]) {
				day = temp;
				break;
			}
			temp = temp - monthArray[month - 1];
			month++;
			if (month > 12) {
				year++;
				month -= 12;
			}
		}
	}
	if (temp <= 0) {
		while (true) {
			monthArray = isLeap(year) ? monthLeap : monthNonLeap;
			month = month - 1;
			if (month <= 0) {
				year = year + (month / 12) - 1;
				month = (month % 12) + 12;
			}
			temp += monthArray[month - 1];
			if (temp > 0) {
				day = temp;
				break;
			}
		}
	}

	temp = m + month;
	if (temp > 12) {
		month = temp % 12;
		year += temp / 12;
	}
	else if (temp <= 0) {
		month = (temp % 12) + 12;
		year = year + (temp / 12) - 1;
	}
	else
		month = temp;
	year += y;
}

bool DateAndTime::isLeap(int y)
{
	if ((y % 400 == 0 && y % 3200 != 0) || (y % 4 == 0 && y % 100 != 0))
		return true;
	else
		return false;
}

int DateAndTime::get(String^ str) {
	if (str == "year")
		return year;
	if (str == "month")
		return month;
	if (str == "day")
		return day;
	if (str == "hour")
		return hour;
	if (str == "minute")
		return minute;
	if (str == "second")
		return second;
}