#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
private:
  string name;
  int id;
  int graduationDate;

public:
  void setName(string nameIn);
  void setId(int idIn);
  void setGraduationDate(int graduationDate);

  string getName();
  int getId();
  int getGraduationDate();
  void printStudentDetails();
  void valuesFromKeyboard();
};

void Student :: setName(string nameIn)
{
  name = nameIn;
}

void Student :: setId(int idIn)
{
  id = idIn;
}

void Student :: setGraduationDate(int graduationDateIn)
{
  graduationDate = graduationDateIn;
}

string Student :: getName()
{
  return name;
}

int Student :: getId()
{
  return id;
}

int Student :: getGraduationDate()
{
  return graduationDate;
}

void Student :: printStudentDetails()
{
  cout <<"\nName: " << name <<"\n";
  cout << "Id: " << id << "\n";
  cout << "Graduation Date: " << graduationDate << "\n\n";
}
