//
//  main.cpp
//  cstdio_c++
//
//  Created by iMac on 02.09.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <cstdio> //include filei/o, string support

using namespace std;

const int maxString = 1024;    // read buffer size

int main() {
    // insert code here...
   
    const char * fn = "test.txt";            // file name
    const char * str = "This is a literal C-string.\n";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "w");
    for(int i = 0; i < 5; i++) {
        fputs(str, fw);
    }
    
    fclose(fw);
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    char buf[maxString];
    FILE * fr = fopen(fn, "r");
    while(fgets(buf, maxString, fr)) {
        fputs(buf, stdout);
    }
    
    fclose(fr);
    //remove(fn);
    
    printf("done.\n");
    
    return 0;  
}
