//
//  main.cpp
//  throw_exception
//
//  Created by iMac on 12.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>

using namespace std;

class throwexception{
public:
    throwexception(); //constructor
    ~throwexception(); //destructor
};
throwexception::throwexception(void){
    cout << "throwexception object constructed" << endl;
    //constructor
}
throwexception::~throwexception(void){
    //destructor
    cout << "throwexception destructor called." << endl;
    throw 9;
}
int main() {
    try{
        throwexception texc;
        cout <<"Throwing exception will cause termination of program." <<endl;
        throw 7;
    }
    catch (...){
        //catch exception
        cout << "Main Exception Caught." << endl;
    }
}
    
