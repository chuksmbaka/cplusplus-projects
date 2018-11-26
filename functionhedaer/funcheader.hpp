#include <iostream>
using namespace std;

void printProduct (int m1, int m2, int product);
int calculateSum (int N1, int N2);
int increament (int &input);

void printProduct (int m1, int m2, int product)
{
  cout  <<"\nproduct: "<< product <<endl<<endl;
}

int calculateSum (int N1, int N2)
{
  return N1 + N2;
}

int increament (int &input)
{
  input++;
  cout<< "The funtion call a = " << input <<"\n";
  return 0;
}
