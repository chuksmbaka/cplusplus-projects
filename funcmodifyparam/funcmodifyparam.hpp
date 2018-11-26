#include <iostream>
using namespace std;

void calculate (float in1, float in2, char op, float &ans);
void printEquation (float input1, float input2, char operation, float result);

void calculate (float in1, float in2, char op, float &ans)
{
  switch (op)
  {
    case '+' : ans = in1 + in2;
               break;
    case '-' : ans = in1 - in2;
               break;
    case '*' : ans = in1 * in2;
               break;
    case '/' : ans = in1 / in2;
               break;
    default : cout << "Illegal operation\n";
  }
}

void printEquation (float input1, float input2, char operation, float result)
{
  cout << input1 << operation << input2 << " = " <<result <<endl;
}
