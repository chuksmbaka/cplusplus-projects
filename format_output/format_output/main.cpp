//
//  main.cpp
//  format_output
//
//  Created by iMac on 14.07.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // insert code here...
    cout<<"The text without any formating\n";
    cout<<"Ints"<<"Floats"<<"Doubles"<<"\n";
    
    cout<<"\nThe text with setw(15)\n";
    cout<<"Ints"<<setw(15)<<"Floats"<<setw(15)<<"Doubles"<<"\n";
    
    cout<<"\nThe text with tabs\n";
    cout<<"Ints\t"<<"Floats\t"<<"Doubles\t"<<"\n\n";
    
    
    /*Formatting Output
     **Goal: practice using cout to format output to console
     **Print the variables in three columns:
     **Ints, Floats, Doubles
     */
    
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    cout<<"Ints"<<setw(10);
    cout<<"Floats"<<setw(10);
    cout<<"Doubles"<<setw(10)<<"\n";
    cout<<a<<setw(12)<<b<<setw(10)<<c<<setw(10)<<"\n";
    cout<<aa<<setw(12)<<bb<<setw(10)<<cc<<setw(10)<<"\n";
    cout<<aaa<<setw(12)<<bbb<<setw(10)<<ccc<<setw(10)<<"\n";
    
    
    return 0;
    
}
