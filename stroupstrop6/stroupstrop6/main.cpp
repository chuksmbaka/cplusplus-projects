//
//  main.cpp
//  stroupstrop6
//
//  Created by iMac on 18/09/16.
//  Copyright © 2016 iMac. All rights reserved.
//

#include <iostream>
#include "stb_lib_facilities.h"
using namespace std;

int main() {
    // insert code here...
    cout<<"please enter epression, + and - only\n";
    cout<<">";
    int ival=0;
    int rval;
    char op;
    int res;
    cin>>ival>>op>>rval;
    
    if(op=='+')
        res=ival+rval;
    if(op=='-')
        res=ival-rval;
    
    cout<<"Result: "<<res<<'\n';
    keep_window_open();
        
    return 0;
}
