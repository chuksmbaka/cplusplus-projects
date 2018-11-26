/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  int maxNumber = 0;
  int minNumber = 100;
  int number;
  int sumTotal = 0;
  float average = 0;

  ifstream openfile ("inputdata.txt");

  for (int i = 0; i < 15; i++){
  openfile >> number;
  if (number > maxNumber) maxNumber = number;
  if (number < minNumber) minNumber = number;

  sumTotal = sumTotal + number;
  average = sumTotal / 15.0;
  }
  cout <<endl;
  cout << "\nmaxNumber: " << maxNumber;
  cout << "\nminNumber: " << minNumber;
  cout << "\nsumTotal: " << sumTotal;
  cout << "\naverage: " << average << "\n\n";
}
