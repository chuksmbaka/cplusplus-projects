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

//Functions declarations
void openCloseFilesExplicitly();
void openCloseFilesImplicitly();
void openCloseFilesWithModes();
void writeToFile();
void readFromFile();

int main()
{
    openCloseFilesExplicitly();
    openCloseFilesImplicitly();
    openCloseFilesWithModes();
    writeToFile();
    readFromFile();
    return 0;
}

void openCloseFilesExplicitly()
{
    //declare file stream objects (files are not open yet)
    ofstream ofile;
    ifstream ifile;
    fstream iofile;

    ///Open the files
    ofile.open("file1.dat");  //opens file1.dat for writing
    ifile.open("ffile2.dat"); //opens file2.dat for reading
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

    //use the fileds

} // files closed implicitely by destructors

void openCloseFilesWithModes()
{
    ofstream ofile3;
    ofile3.open("file3.dat", std::ios_base::binary | std::ios_base::app);
    ofstream ofile4("file4.dat", std::ios_base::binary | std::ios_base::app);
    ofile3.is_open();
    ofile4.is_open();
}

void writeToFile()
{
    ofstream ofile5("file5.txt");
    if (ofile5.is_open())
    {
        ofile5 << "Here is line 1: " << endl;
        ofile5 << "Here is line 2: " << endl;
        ofile5 << "Here is line 3: " << endl;
        ofile5.close();

        cout << "Finished writing text to file1.txt." << endl;
    }
    else
    {
        cerr << "Couldn't open file5.txt for writing." << endl;
    }
}

void readFromFile()
{
    ifstream ifile5("file5.txt");
    if (ifile5.is_open())
    {
        string line;                  // A variable in which we will store the read strings
        while (getline(ifile5, line)) //ifile reads the lines out and stores it into line
        {
            cout << line << endl;
        }
        ifile5.close();
        cout << "Finished reading text from file5.txt" << endl;
    }
    else
    {
        cerr << "Could not open file5.txt for reading" << endl;
    }
}