edit : main.o course.o student.o teacher.o
	g++ -c edit main.o course.o student.o teacher.o

main.o : main.cpp course.hpp main.hpp
	g++ -c main.cpp

course.o : course.cpp course.hpp
	g++ -c course.cpp

student.o : student.cpp student.hpp
	g++ -c student.cpp

teacher.o : teacher.cpp teacher.hpp
	g++ -c teacher.cpp

clean : 
	rm edit main.o course.o student.o teacher.o

	