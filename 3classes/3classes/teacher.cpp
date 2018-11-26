//
//  teacher.cpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include "teacher.hpp"

Teacher::Teacher()
{
    firstName = " ";
    lastName = " ";
    courseName = " ";
    age = 0;
    address = " ";
    city = " ";
    phoneNumber = " ";
}

Teacher::~Teacher()
{
}

void Teacher::setFirstName(string firstNameIn)
{
    firstName = firstNameIn;
}
void Teacher::setLastName(string lastNameIn)
{
    lastName = lastNameIn;
}
void Teacher::setAge(int ageIn)
{
    age = ageIn;
}
void Teacher::setAddress(string addressIn)
{
    address = addressIn;
}
void Teacher::setCity(string cityIn)
{
    city = cityIn;
}
void Teacher::setPhoneNumber(string phoneNumberIn)
{
    phoneNumber = phoneNumberIn;
}

string Teacher::getFirstName()
{
    return firstName;
}
string Teacher::getLastName()
{
    return lastName;
}
int Teacher::getAge()
{
    return age;
}
string Teacher::getAddress()
{
    return address;
}
string Teacher::getCity()
{
    return city;
}
string Teacher::getPhoneNumber()
{
    return phoneNumber;
}
void Teacher::gradeStudent()
{
    cout << "Student graded. "<< endl;
}
void Teacher::sitInClass()
{
    cout << "Sitting at front of class\n";
}
void Teacher::setCourseName(string courseNameIn)
{
    courseName = courseNameIn;
}
string Teacher::getCourseName()
{
    return courseName;
}
