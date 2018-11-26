#include <iostream>
#include <list>
using namespace std;
 
 int main() 
{
    list<int> li = {3, 5, 9, 7};// C++11
    for (list<int>::iterator it= li.begin(); it != li.end(); ++it) {
        int i= *it;
        cout << i <<endl;
        }
        return 0;
}