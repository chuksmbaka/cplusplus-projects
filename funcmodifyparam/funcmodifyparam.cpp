#include "funcmodifyparam.hpp"

int main ()
{
  char operation = '/';
  float input1 = 100.00;
  float input2 = 300.00;
  float result;

  calculate (input1, input2, operation, result); // result is assigned a value headerfile1
  printEquation (input1, input2, operation, result);
}
