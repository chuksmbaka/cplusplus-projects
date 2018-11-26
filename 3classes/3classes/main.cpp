#include "student.hpp"
#include "teacher.hpp"
#include "Course.hpp"
//#include "course.hpp"
#include "main.h"
#include <string>


int main()
{
    Course intermidiateC;
    Student student1, student2, student3;
    Teacher teacher;
    
    student1.setFirstName("Emmanuel");
    student1.Student::setLastName("Mbaka");
    student1.setAge(30);
    student1.setAddress("17 Tony Umeh str Awada");
    student1.setCity("Onitsha");
    student1.setPhoneNumber("080623968943");
    
    firstNameInstruct();
    cout << student1.getFirstName() << endl;
    
    lastNameInstruct();
    cout << student1.getLastName() << endl;
    
    ageInstruct();
    cout << student1.getAge() << endl;
    
    addressInstruct();
    cout << student1.getAddress() << endl;
    
    cityInstruct();
    cout << student1.getCity() << endl;
    
    cout << "phone number: " << student1.getPhoneNumber() << endl;
    student1.sitInClass();
    
    
    cout << "\nTeachers Info... " <<endl;
    teacher.setFirstName("Nwanjoku");
    teacher.setLastName("ike");
    teacher.setAge(40);
    teacher.setAddress("20 Tony Umeh str Awada");
    teacher.setCity("Ogidi");
    teacher.setPhoneNumber("080623964455");
    
    firstNameInstruct();
    cout << teacher.getFirstName() << endl;
    
    lastNameInstruct();
    cout << teacher.getLastName() << endl;
    
    ageInstruct();
    cout << teacher.getAge() << endl;
    
    addressInstruct();
    cout << teacher.getAddress() << endl;
    
    cityInstruct();
    cout << teacher.getCity() << endl;
    
    cout << "phone number: " << teacher.getPhoneNumber() << endl;
    teacher.gradeStudent();
    teacher.sitInClass();
    
    cout <<"Course class call...\n\n";
    
    intermidiateC.setFirstName("Emmanuel");
    intermidiateC.setLastName("Mbaka");
    intermidiateC.setCourseName("Intermediate C++");
    intermidiateC.teacherInfo();
    
}
