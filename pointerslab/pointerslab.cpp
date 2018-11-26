#include <iostream>
using namespace std;

int main()
{
    int num1;
    int *pNum = new int;
    //int number = 5;

    num1 = 3;
    *pNum = 5;
    cout << pNum <<endl;
    delete pNum;
    cout << *pNum;
}