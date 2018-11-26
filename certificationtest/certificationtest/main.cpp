//
//  main.cpp
//  certificationtest
//
//  Created by iMac on 21.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>

using namespace std;

int fun1(int p) {
    p++;
    p++;
    cout << "inside function fun1(), p = " << p <<endl;
    return 0;
}
int fun2(int &p) {
    ++p;
    return p++;
}
int main() {
    int a = 1;
    int b;
    int c;
    cout <<"a = "<< a << endl;
    cout << "b = "<< b << endl;
    cout <<"c = "<< c << endl;
    cout << endl;
    b = fun1(a);
    c = fun2(b);
    cout <<"a = "<< a << endl;
    cout << "b = "<< b << endl;
    cout <<"c = "<< c << endl;
    return 0;
}

