//
//  main.cpp
//  new
//
//  Created by iMac on 14.07.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    enum MONTH{jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    
    //define bestMosnths as a variable of type months
    MONTH bestMonth;
    
    //assign nestMonth one of the values of MONTHS
    bestMonth = jan;
    
    //check the value of bestMonths
    if(bestMonth == jan){
        cout<<"I'm not so sure January is the best month.\n";
    }
    return 0;
}
