//
//  teacher.hpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//



#include <stdio.h>

#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    string firstName;
    string lastName;
    string courseName;
    int age;
    string address;
    string city;
    string phoneNumber;
    
public:
    Teacher();
    ~Teacher();
    void setFirstName(string firstNameIn);
    void setLastName(string lastNameIn);
    void setAge(int ageIn);
    void setAddress(string addressIn);
    void setCity(string cityIn);
    void setPhoneNumber(string phoneNumberIn);
    void setCourseName(string courseNmameIn);
    
    string getFirstName();
    string getLastName();
    string getCourseName();
    int getAge();
    string getAddress();
    string getCity();
    string getPhoneNumber();
    void gradeStudent();
    void sitInClass();
};

