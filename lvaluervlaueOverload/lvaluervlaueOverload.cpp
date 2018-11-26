#include <iostream>

using namespace std;

void foo(int &)
{
    cout << "non-const lvalue ref" << endl;
}

void foo(int &&)
{
    cout << "non-const rvalue ref" << endl;
}

void bar(const int &)
{
    cout << "const lvalue ref" << endl;
}

int main()
{
    int a = 0;
    foo(a);

    foo(5);

    bar(a);
    bar(5);
}