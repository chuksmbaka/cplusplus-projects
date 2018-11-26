#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//this function manipulates the values of the variables in main only
void valuesFromKeyboard(string &name, int &id,int &graduationDate);

void valuesFromKeyboard(string &name, int &id,int &graduationDate)
{
cout << "\ntype in the students details:\n";

cout << "Name: ";
getline(cin, name);

cout << "Student Id: ";
cin >> id;

cout << "Graduation Date: ";
cin >> graduationDate;
}
