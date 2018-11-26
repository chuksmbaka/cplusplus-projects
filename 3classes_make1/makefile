edit : main.o Course.o student.o teacher.o
	g++ -o edit main.o Course.o student.o teacher.o

main.o : main.cpp Course.h main.h 
	g++ -c main.cpp

Course.o : Course.cpp Course.h
	g++ -c Course.cpp

student.o : student.cpp student.h
	g++ -c student.cpp

teacher.o : teacher.cpp teacher.h
	g++ -c teacher.cpp

clean : 
	rm edit main.o Course.o student.o teacher.o

	