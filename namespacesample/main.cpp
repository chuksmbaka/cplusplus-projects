#include <iostream>
#include <cmath>
#include "math.hpp"

using namespace std;

int main()
{
    double sq = sqrt(2.3);
    cout << "sqaure root of 2.3 is: " << sq << endl;

    long p = pow(2, 4);
    cout << p << endl;

    int d = MyMath::math::pow(2, 100); // here we call the user defined pow() function and not the c++ standard pow
                                       // the syntax is namespaceName::className::functionName()
    cout << d << endl;
    return 0;
}
