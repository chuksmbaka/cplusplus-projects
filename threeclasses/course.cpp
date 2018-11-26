#include "course.hpp"

Course::Course()
{
    //students = new Student;
    //cout << teacher->getLastName();
}

void Course::teacherInfo()
{
    cout << "Teachers name: " <<teacher.getFirstName() << " " << teacher.getLastName() <<endl;
    cout << "Course: " << getCourseName() <<endl;
}

void Course::setFirstName(string firstNameIn)
{
    teacher.setFirstName(firstNameIn);
}
void Course::setLastName(string lastNameIn)
{
    teacher.setLastName(lastNameIn);
}
void Course::setCourseName(string courseNameIn)
{
    courseName = courseNameIn;
}
string Course::getCourseName()
{
    return courseName;
}


