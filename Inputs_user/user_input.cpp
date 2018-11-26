#include<iostream>
#include<string>
#include <sstream> // for converting a string to other data types like float
using namespace std;

int main(){
  string userName, address, phoneNumber;
  cout<<"What is your nickname?: ";
  getline(cin, userName);
  cout<<"Address: ";
  getline(cin, address);
  cout<<"Phone number: ";
  getline(cin, phoneNumber);
cout<<"\n"<<userName<<"\n"<<"\t"<<address<<"\n"<<"\t"<<phoneNumber<<"\n";

//----------from here we make use of sstream----------
cout<<"\n----------from here we make use of sstream----------\n";

string stringLength;
float inches = 0;
float yardage = 0;
cout<<"Emter number of inches: ";
getline(cin, stringLength);
stringstream(stringLength) >> inches;
cout<<"you entered "<<inches<<" inches."<<"\n";

yardage = inches/36;
cout<<"yardage is "<<yardage<<"\n\n";


cout<<"\n----------from here we make use of sstream for room size----------\n";

string stringLength2, stringWidth;
float lengthOfRoom = 0;
float widthOfRoom = 0;

cout<<"length of room: ";
getline(cin, stringLength2);
stringstream(stringLength2) >> lengthOfRoom;

cout<<"width of room: ";
getline(cin, stringWidth);
stringstream(stringWidth) >> widthOfRoom;

cout<<"Area of room: "<<lengthOfRoom*widthOfRoom<<" meter squared."<<"\n";



return 0;
}
