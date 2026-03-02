students: main.o address.o date.o student.o
	g++ main.o address.o date.o student.o -o students

main.o: main.cpp address.h date.h student.h
	g++ -c main.cpp 

student.o: student.h student.cpp
	g++ -c student.cpp

address.o: address.h address.cpp
	g++ -c address.cpp

date.o: date.h date.cpp
	g++ -c date.cpp

clean: 
	rm students
	rm *.o

run: students
	./students
