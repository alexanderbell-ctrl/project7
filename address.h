#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address{
	Private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	Public:
		Address();
		init(std::string addressString);
		void printAddress();
}

#endif
