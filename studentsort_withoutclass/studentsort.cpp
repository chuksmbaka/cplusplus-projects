/*Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
*/

#include "studentsort.hpp"

int main()
{
    //const int numberOfStudents = 2;
    string studentName1 = " ";
    string studentId1 = " ";
    string graduationDate1 = " ";

    string studentName2 = " ";
    string studentId2 = " ";
    string graduationDate2 = " ";
    //ToDo sort the students by name, then by number, then by gradDate
    //for (int i = 0; i < numberOfStudents; i++)
    //{
    getInfo (studentName1, studentId1, graduationDate1);
    //showInfo (studentName1, studentId1, graduationDate1);
  //}
    cout << "\n\nDetails of second student: \n";
    getInfo (studentName2, studentId2, graduationDate2);
    //showInfo (studentName2, studentId2, graduationDate2);


    string name = searchByName();
    if (name == studentName1) showInfo (studentName1, studentId1, graduationDate1);
    else
    if (name == studentName2) showInfo (studentName2, studentId2, graduationDate2);
    else
       cout << "\nerror...\n\n";
    cout << "\n" << returnStudentName(name) << " was searched for. ";
    cout <<"\n";
    return 0;
}
