#include <iostream>
#include <string>

using namespace std;

//base class
class Student
{
  private:
    int id;

  public:
    void setId(int idIn);
    int getId();
    Student();
};

Student ::Student()
{
    id = 00000000;
}
void Student ::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : public Student
{
  private:
    string degree;

  public:
    GradStudent();
    void setDegree(string degreeIn);
    string getDegree();
};

GradStudent::GradStudent()
{
    degree = "undelcared";
}
void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string GradStudent::getDegree()
{
    return degree;
}

//Another class
class Staff
{
  private:
    string title;

  public:
    Staff();
    void setTitle(string input);
    string getTitle();
};

Staff::Staff()
{
    title = "NA";
}

void Staff::setTitle(string input)
{
    title = input;
}

string Staff::getTitle()
{
    return title;
}

class GradStudent
{
  private:
    int studentId;

  public:
    GradStudent();
    void setId(int input);
    int getId();
};

//class TA has multiple inheritances
class TA: public Staff, public GradStudent
{
    private:
        string supervisor;
    public:
        TA();
        void setSupervisor(string input);
        string getSupervisor();
};

TA::TA()
{
    supervisor = "NA";
}

void TA::setSupervisor(string input)
{
    supervisor = input;
}

string TA::getSupervisor()
{
    return supervisor;
}

