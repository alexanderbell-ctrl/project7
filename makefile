students: main.cpp
	g++ main.cpp -o students

clean: 
	rm students

run: students
	./students
