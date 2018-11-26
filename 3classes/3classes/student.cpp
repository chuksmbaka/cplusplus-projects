//
//  student.cpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include "student.hpp"
//#include "student.hpp"
//#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
{
    firstName = " ";
    lastName = " ";
    age = 0;
    address = " ";
    city = " ";
    phoneNumber = " ";
}

Student::~Student()
{
}

void Student::setFirstName(string firstNameIn)
{
    firstName = firstNameIn;
}
void Student::setLastName(string lastNameIn)
{
    lastName = lastNameIn;
}
void Student::setAge(int ageIn)
{
    age = ageIn;
}
void Student::setAddress(string addressIn)
{
    address = addressIn;
}
void Student::setCity(string cityIn)
{
    city = cityIn;
}
void Student::setPhoneNumber(string phoneNumberIn)
{
    phoneNumber = phoneNumberIn;
}

string Student::getFirstName()
{
    return firstName;
}
string Student::getLastName()
{
    return lastName;
}
int Student::getAge()
{
    return age;
}
string Student::getAddress()
{
    return address;
}
string Student::getCity()
{
    return city;
}
string Student::getPhoneNumber()
{
    return phoneNumber;
}
void Student::sitInClass()
{
    cout << "Sitting in main theater\n\n";
}