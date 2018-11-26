#include <iostream>
using namespace std;

/* Knowledge of value categories and references is necessary to understand move 
semantics and ownership transfer */

int main()
{
    //lvalue

    int a;

    //Lvalue can appear on the left side of the built-in
    //assignment operator:
    a = 0;

    //Thes address of lvalues can be taken:
    int *a_ptr = &a;

    //Lvalues can bind to lvalue references:
    int &a_ref = a;

    //Examples of lvalues:
    //1. Nmae of a variable:
    a;

    //2. Member of object expression
    struct foo
    {
        int _b;
    };
    foo f;
    f._b; //the entire expressiion is an lvalue

    //3. Function call returning lvalue references:
    int &bar();
    int *bar_ptr = &bar(); //taking the address of lvalue expression bar()
    cout << "address of bar(): " << bar_ptr << endl;
    cout << "bar() before assignment: " << bar() << endl;
    bar() = 5; //assigning a value to lvalue expresssion
    cout << "bar() after assignment: " << bar() << endl;

    /* -------------- Rvalues ---------------*/
    int bar2();
    //Rvalues cannot apppear on the left side op the built-in assignment opereator:
    //5 = 0;
    //bar() = 0;

    //the address of rvalues cannot be taken:
    //&5;
    //&bar2();

    //Rvalues do not bind to lvalue references:
    //int& lv_ref0 = 5;
    //int& lv_ref1 = bar();

    //Rvalues bind to rvalue references
    int &&rv_ref0 = 5;
    int &&rv_ref1 = bar2();

    //Examples of rvalues
    //1. Numeric numerals:
    //5;
    //10.33f;

    //2. Built in arithmetic expressions:
    //5+10*3;

    //3. Function calls returning non_rferences:
    bar2();
}

int &bar()
{
    static int i = 1;
    return i;
}

int bar2()
{
    return 5;
}