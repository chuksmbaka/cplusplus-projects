#include <iostream>
#include <string>
#include <stdio.h>


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

