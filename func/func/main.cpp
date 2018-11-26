#include "Header.h"

int main()
{
    int m1 = 29;
    int m2 = 30;
    int product;
    int additions;
    
    product = m1 * m2;
    printProduct (m1, m2, product);
    
    //addition
    additions = calculateSum (m1 , m2);
    cout << additions << endl;
    return 0;
}
