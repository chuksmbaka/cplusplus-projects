//
//  main.cpp
//  formatted_output
//
//  Created by iMac on 14.09.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // The c++ standard formatted output makes use of printf().
    int i = 47;
    long int li = 1234567890;
    const char * s = "This is a string";
    printf("%d, %ld, %s.\n", i, li, s);
    
    
    //formatted wwritting to a file
    const  char * filename = "formatted_output.txt";
    FILE * fileStream = fopen(filename, "w");
    fprintf(fileStream, "%d, %ld, %s.\n", i, li, s);
    fclose(fileStream);
    
    //writting to a buffer
    const size_t maxlen = 128; //128 bytes maximum buffer size
    char buffer[maxlen]; //buffer
    snprintf(buffer,maxlen, "%d, %ld, %s.\n", i, li, s);
    
    //display buffer content on tehe screen
    puts(buffer);
    
    return 0;
}
