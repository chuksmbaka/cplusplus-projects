
//#include "teacher.cpp"
//#include "student.cpp"

using namespace std;

#include <stdio.h>
#include <iostream>
#include <string>
#include "teacher.hpp"
#include "student.hpp"

using namespace std;

class Course
{
    //new Student students[];
    static const int numberOfStudents = 3;
    Teacher teacher;
    Student student[numberOfStudents];
    string courseName;
    
public:
    Course();
    void teacherInfo();
    void setFirstName(string firstNameIn); // to set the first name of the teacher of this course
    void setLastName(string lastNameIn);
    void setCourseName(string courseNameIn);
    string getCourseName();
    
};

