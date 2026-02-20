students: main.o address.o
	g++ main.o address.o -o students

main.o: main.cpp address.h
	g++ -c main.cpp 

address.o: address.h address.cpp
	g++ -c address.cpp

clean: 
	rm students
	rm *.o

run: students
	./students
