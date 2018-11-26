//
//  main.cpp
//  file_stream_position
//
//  Created by iMac on 05.08.18.
//  Copyright © 2018 iMac. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void openCloseFilesExplicitly();
void openCloseFilesImplicitly();

int main() {
    openCloseFilesExplicitly();
    return 0;
}

void openCloseFilesExplicitly()
{
    //declare file stream objects (files are not open yet)
    ofstream ofile;
    ifstream ifile;
    fstream iofile;
    
    ///Open the files
    ofile.open("file1.dat"); //opens file1.dat for writing
    ifile.open("ffile2.dat");//opens file2.dat for reading
    iofile.open("file3.dat");
    
    //usw the files
    
    //close the files
    ofile.close();
    ifile.close();
    iofile.close();
}

/* Alternatively, you can rely on the file stream object's constructors and destructors to open/close the file. Specifically, if you pass the filename into the constructor, then the file is opened immediately. Likewise, if the file is still open when the destructor is called, then the destructor will close the file. Consider the following example:
*/
void openCloseFilesImplicitly()
{
    //Declare file stream objects (files opened implicitly by constructors).
    ofstream ofile2("file11.dat");
    ifstream ifile2("file22.dat");
    fstream iofile("file33.dat");
    
    //use the fields
    
    
}// files closed implicitely by destructors
