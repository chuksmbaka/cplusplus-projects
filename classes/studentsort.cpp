#include "studentsort.hpp"
#include "nonclassfunctions.hpp"

int main()
{
  string name = " ";
  int id = 0;
  int graduationDate = 0;
  Student student1;

  //get values of the data above from keyboard.
  valuesFromKeyboard(name, id, graduationDate);

  //set values
  student1.setName(name);
  student1.setId(id);
  student1.setGraduationDate(graduationDate);

  //print details out
  student1.printStudentDetails();
}
