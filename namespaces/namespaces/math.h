//here we creat a namespace
#include <iostream>
using namespace std;

namespace MyMath
{
    class math  //we use static here because we dont want to creat instances of this class. we just want to use its member functions
    {
    public:
        math();
        ~math();
        
         static int pow(int, int); //My power function.
        
    };
}

 int MyMath::math::pow(int value, int exp)
{
    cout << endl << "In Mymath::math::pow" << endl;
    int result = 1;
    if (exp > 0)
    {
        for (int x = 0; x < exp; x++)
        {
            result = result * value;
        }
    }
    else
    {
        cout << "Enter only positive values for the exponent"<< endl;
        result = 0;
    }
    return result;
}
