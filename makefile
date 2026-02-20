students: main.o address.o date.o
	g++ main.o address.o date.o -o students

main.o: main.cpp address.h date.h
	g++ -c main.cpp 

address.o: address.h address.cpp
	g++ -c address.cpp

date.o: date.h date.cpp
	g++ -c date.cpp

clean: 
	rm students
	rm *.o

run: students
	./students
