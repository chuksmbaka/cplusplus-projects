//
//  main.cpp
//  sin-wave
//
//  Created by iMac on 30.08.18.
//  Copyright © 2018 iMac. All rights reserved.


#include <iostream>
#include <iomanip>
#include <math.h>

#define INCREMENT 0.5

using namespace std;

int main() {
    // insert code here...
    cout << "preprocessor, INCREMENT = " << INCREMENT << endl;
    
    cout << "sin function "<<endl;

    double i;
    for (i = 0.0; i <= 360.0; i++)
    {
        cout << setprecision(3) << sin(i) << ", ";
        
        int modulo = (int)i % 5;
        if (modulo == 0)
        {
            cout << endl;
        }
    }
    return 0;
    
}
