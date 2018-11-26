//
//  Course.hpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#ifndef Course_h
#define Course_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "teacher.h"
#include "student.h"

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


#endif /* Course_hpp */
