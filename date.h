#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <string>

class Date{
	Private:
		int month;
		int day;
		int year;
	Public:
		Date();
		init(std::string dateString);
		void printDate();
}

#endif
