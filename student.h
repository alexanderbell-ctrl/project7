#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include <string>

class Student{
	private:
		std::string firstName;
		std::string lastName;
		int creditHours;
	public:
		Student();
		void init(std::string studentString);
		void ~Student();
		void printStudent();
		void getLastFirst();
};

#endif
