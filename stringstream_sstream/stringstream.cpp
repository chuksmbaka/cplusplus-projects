/*the sringstream function of the sstream header can be used to
convert a string to any other data type (eg to float)*/

#include <string>
#include <iostream>
#include <sstream> // for converting a string to other data types like float
using namespace std;

int main()
{
  //----------from here we make use of sstream----------
  cout << "\n----------from here we make use of sstream----------\n";

  string stringLength;
  float inches = 0;
  float yardage = 0;
  cout << "Emter number of inches: ";
  getline(cin, stringLength);
  stringstream(stringLength) >> inches; //converts string to float
  cout << "you entered " << inches << " inches."
       << "\n";

  yardage = inches / 36;
  cout << "yardage is " << yardage << "\n\n";

  cout << "\n----------from here we make use of sstream for room size----------\n";

  string stringLength2, stringWidth;
  float lengthOfRoom = 0;
  float widthOfRoom = 0;
  float area = 0;

  cout << "length of room: ";
  getline(cin, stringLength2);
  stringstream(stringLength2) >> lengthOfRoom; // converts a string to float

  cout << "width of room: ";
  getline(cin, stringWidth);
  stringstream(stringWidth) >> widthOfRoom;

  area = lengthOfRoom * widthOfRoom;
  cout << "Area of room: " << area << " meter squared."
       << "\n";

  cout << "\n----------setting and getting content of a string stream----------\n";

  //Create a stringstream Object.
  stringstream stream;
  stream << "jane"
         << " " << 42 << " " << 15000 << endl; //formatted output

  //reading formatted input
  //string name;
  //int age;
  //double salary;
  //stream >> name >> age >>salary;
  //cout << "Name: " <<name << endl <<"Age: " << age <<endl;

  //set the string content from a stringstream.
  stream.str("Jane 42 15000");

  //Get the string content from stringstream
  cout << "Content of string stream: " << stream.str() << endl;

  cout << "\n----------The following example shows how to create and use std::istringstream and std::istringstream objects:"
       << "----------\n";
  // Create an istringstream object, which supports read-only operations.
  std::istringstream stream1(stream.str());

  // Read formatted data from istringstream.
  string name;
  int age;
  double salary;
  stream1 >> name >> age >> salary;
  cout << "Name: " << name << endl
       << "Age: " << age << endl;

  return 0;
}
