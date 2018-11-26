#include <iostream>

using namespace std;

class Student
{
    int grade[5]; // for five courses only.
    int id;
    public:
    Student();
    void setGrade(int index, int gradeIn); //index count the courses.
    void setId(int idIn);
    int getGrade(int index);
    int getId();
    float getAverage();
};

Student :: Student()
{
    for(int i = 0; i < 5; i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Student :: setId(int idIn)
{
    id = idIn;
}

void Student :: setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}

int Student :: getId()
{
    return id;
    }


int Student ::  getGrade(int index)
{
    return grade[index];
    }



 float Student :: getAverage()
 {
     int total = 0;
     float average = 0;
     for(int i = 0; i < 5; i++)
    {
        total = total + grade[i];
    }
    average = (float) total/5;
    return average;
 }