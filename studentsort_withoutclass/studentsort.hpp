/*Header file for main.cpp*/

#include <iostream>
#include<string>

using namespace std;

const int numberOfStudents = 2;

void getInfo (string &studentName, string &studentId, string &graduationDate);
void showInfo (string studentName, string studentId, string graduationDate);
string returnStudentName(string studentName);
string searchByName ();

void getInfo (string &studentName, string &studentId, string &graduationDate)
{
    cout << "Student Name: ";
    getline (cin, studentName);

    cout << "Student Id: ";
    getline (cin, studentId);

    cout << "Graduation Date: ";
    getline (cin, graduationDate);
}

void showInfo (string studentName, string studentId, string graduationDate)
{
    cout << "Student Name: " << studentName <<endl;
    cout << "Student Id: " << studentId <<endl;
    cout << "graduation Date: " << graduationDate <<endl;
}

string searchByName ()
{
  string name;
  cout << "\nType in the name to be searched: ";
  cin >> name;
  return name;
}

string returnStudentName(string studentName)
{
  return studentName;
}
