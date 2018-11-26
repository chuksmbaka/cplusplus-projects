
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {3, 5, 9, 7};// C++11
    for (list<int>::iterator it= l.begin(); it != l.end(); ++it) {
        int i= *it;
        cout << i <<endl;
    }
    return 0;
}
