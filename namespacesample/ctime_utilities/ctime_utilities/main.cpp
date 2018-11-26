//
//  main.cpp
//  ctime_utilities
//
//  Created by iMac on 14.09.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <cstdio>
#include <ctime>
#include <iostream>
#include <chrono> //for durarions

using namespace std;

int main(int argc, const char * argv[]) {
    const time_t myTime = time(nullptr);
    printf("time: %ld\n", myTime);
    cout << "time: " << myTime << endl;
    char * ch = ctime(&myTime);
    cout << "ch: " << ch <<endl;
    
    chrono::duration <int, kilo> interval(3);
    cout << "waiting... " << endl;
    
    
    
    return 0;
}
