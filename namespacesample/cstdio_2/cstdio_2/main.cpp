//
//  main.cpp
//  cstdio_2
//
//  Created by iMac on 03.09.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <cstdio>

using namespace std;

int main() {
    // Write to a file...
    int maxString = 100;
    FILE * io_stream_pointer;
    const char * filename = "new_file.txt";
    io_stream_pointer = fopen(filename, "wa");
    fputs("let us rejoce and be glad!!!", io_stream_pointer); //inserts the string into the file pointer object
    puts("On Screen: All that glitters is not gold"); // displays same info on screen
    fclose(io_stream_pointer); // closes file
    
    //to read from file
    char string_buffer[maxString];
    FILE * file_reader = fopen(filename, "ra");
    while(fgets(string_buffer, maxString, file_reader))
    {
    //fputs(string_buffer, stdout);
    puts(string_buffer);
    }
    return 0;
}
