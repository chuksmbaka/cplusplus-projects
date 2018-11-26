//
//  student.hpp
//  3classes
//
//  Created by iMac on 01.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

class Student
{
private:
    string firstName;
    string lastName;
    int age;
    string address;
    string city;
    string phoneNumber;
    
public:
    Student();
    ~Student();
    void setFirstName(string firstNameIn);
    void setLastName(string lastNameIn);
    void setAge(int ageIn);
    void setAddress(string addressIn);
    void setCity(string cityIn);
    void setPhoneNumber(string phoneNumberIn);
    
    string getFirstName();
    string getLastName();
    int getAge();
    string getAddress();
    string getCity();
    string getPhoneNumber();
    void sitInClass();
};
#endif /* student_hpp */
