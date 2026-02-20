#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address{
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string sStreet, std::string sCity, std::string sState, std::string sZip);
		void printAddress();
};

#endif
