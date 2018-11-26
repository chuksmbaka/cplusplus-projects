#include "arrayofclass.hpp"

int main()
{

    Student student[5];
    Student student1;
    student1.setId(6779091);
    student1.setGrade(0, 72);
    student1.setGrade(1, 100);
    student1.setGrade(2, 120);

    student[0].setId(12345);
    student[0].setGrade(0, 29);
    student[0].setGrade(1, 787);
    student[0].setGrade(2, 100);
    student[0].setGrade(3, 120);
    student[0].setGrade(4, 267);

    
    cout << "\nReg Number: " << student1.getId() << "\n";
    cout << "grade course 0: " << student1.getGrade(0) << "\n";
    cout << "grade course 1: " << student1.getGrade(1) << "\n";
    cout << "grade course 2: " << student1.getGrade(2) << "\n\n";



    cout << "\nReg Number: " << student[0].getId() << "\n";
    cout << "grade course 0: " << student[0].getGrade(0) << "\n";
    cout << "grade course 1: " << student[0].getGrade(1) << "\n";
    cout << "grade course : " << student[0].getGrade(0) << "\n";
    cout << "grade course 1: " << student[0].getGrade(1) << "\n";
    cout << "grade course 2: " << student[0].getGrade(2) << "\n\n";
    


    return 0;
}
