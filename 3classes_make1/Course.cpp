//
//  Course.cpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include "Course.h"

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


