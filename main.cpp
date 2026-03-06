#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"
#include <vector>
#include <fstream>

void testAddress();
void testDate();
void testStudent();
void loadStudents(std::vector<Student*>&);
void printStudents(std::vector<Student*>&);
void showStudentNames(std::vector<Student*>&);
void findStudent(std::vector<Student*>&);
void delStudents(std::vector<Student*>&);

int main(){

	std::vector<Student*> students;

	loadStudents(students);
	bool whileTrue = true;

	while(whileTrue){
		int menuOption;
		std::cout << std::endl << "Please select an option..." << std::endl;
		std::cout << "0 - Quit" << std::endl << "1 - Print Student Names" << std::endl << "2 - Print All Student Data" << std::endl << "3 - Find a Student" << std::endl;
		std::cin >> menuOption;
		if(menuOption==1){
			showStudentNames(students);
		} // end if 1
		else if(menuOption==2){
			printStudents(students);
		} // end if 2
		else if(menuOption==3){
			
		} // end if 3
		else{
			whileTrue = false;	
		} // end if 0	

	} // end while
/*
  std::cout << "Hello!" << std::endl;
  //testAddress();
  //testDate();
  testStudent();
*/
  return 0;
} // end main

void loadStudents(std::vector<Student*>& students){
	std::ifstream fileIN;
	std::string currentLine;

	fileIN.open("students.csv");
	while(getline(fileIN, currentLine)){
		Student* tempS = new Student();
		tempS->init(currentLine);
		students.push_back(tempS);
	} // end while
	fileIN.close();
	
} // end loadStudents

void showStudentNames(std::vector<Student*>& students){
	for(Student* student: students){
		student->getLastFirst();
		std::cout << ", " << student->getCreditHours() << std::endl;
	} // end for
} // end showStudentNames

void printStudents(std::vector<Student*>& students){
	for(Student* student: students){
		student->printStudent();
	} // end for
} // end printStudents


void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress


void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate


void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  student->getLastFirst();
  delete student;
} // end testStudent

