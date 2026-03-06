#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include <string>
#include "address.h"
#include "date.h"

class Student{
	private:
		std::string firstName;
		std::string lastName;
		int creditHours;
	public:
		Student();
		void init(std::string studentString);
			Address* address;
	    	Date* birthDate;
	    	Date* gradDate;
		~Student();
		void printStudent();
		std::string getLastFirst();
		int getCreditHours();
};

#endif
