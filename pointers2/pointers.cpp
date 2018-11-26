#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main ()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std :: string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    //creat output file. also serves as input fileto our program
    ofstream myfile1; // object of ofstream. outputfile created here
    if (myfile1.is_open()) myfile1.close();
    myfile1.open("inputfile.txt", ios :: app); //open file. ios::app
                                               //makes it impossible to delete
    //read data from th inputfile                                               //old data in the file
    ifstream myfile2("inputfile.txt"); //object of ifstream. takes input from the text file
    //creat another output file to store the data
    ofstream myfile3("outputfile.txt");


    getline(myfile2, givenString);
    cout << "givenString: " << givenString;
    stringstream(givenString) >> givenInt;
    cout << "\ngivenInt: " << givenInt << "\n\n";
    myfile3 << "givenString: " << givenString;
    myfile3 << "\ngivenInt: " << givenInt << "\n\n";

    getline(myfile2, givenString);
    cout << "givenString: " << givenString;
    stringstream(givenString) >> givenFloat;
    cout << "\ngivenFloat: " << givenFloat << "\n\n";
    myfile3 << "givenString: " << givenString;
    myfile3 << "\ngivenFloat: " << givenFloat << "\n\n";

    getline(myfile2, givenString);
    cout << "givenString: " << givenString;
    stringstream(givenString) >> givenDouble;
    cout << "\ngivenDouble: " << givenDouble << "\n\n";
    myfile3 << "givenString: " << givenString;
    myfile3 << "\ngivenDouble: " << givenDouble << "\n\n";

    getline(myfile2, givenString);
    cout << "givenString: " << givenString;
    cout << "\ngivenString: " << givenString << "\n\n";
    myfile3 << "givenString: " << givenString;
    myfile3 << "\ngivenString: " << givenString << "\n\n";

    getline(myfile2, givenString);
    cout << "givenString: " << givenString;
    cout << "\ngivenFloat: " << givenChar << "\n\n";
    myfile3 << "givenString: " << givenString;
    myfile3 << "\ngivenFloat: " << givenChar << "\n\n";

    cout << "Addresses of the variables: \n";
    cout << "givenInt: " << &givenInt << "\n";
    cout << "givenFloat: " << &givenFloat << "\n";
    cout << "givenDouble: " << &givenDouble << "\n";
    cout << "givenString: " << &givenString << "\n";
    cout << "givenChar: " << &givenChar << "\n";

    //Use indirection to the get the value stored at the address
    std::cout << "\npointer of givenInt = " << *pointerGivenInt <<"\n";
    std::cout << "pointer of pointer of givenInt = " << **pointerPointerGivenInt << "\n";

    //creat another output file to store the data
    myfile3 << "Addresses of the variables: \n";
    myfile3 << "givenInt: " << &givenInt << "\n";
    myfile3 << "givenFloat: " << &givenFloat << "\n";
    myfile3 << "givenDouble: " << &givenDouble << "\n";
    myfile3 << "givenString: " << &givenString << "\n";
    myfile3 << "givenChar: " << &givenChar << "\n";

    myfile3 << "\npointer of givenInt = " << *pointerGivenInt <<"\n";
    myfile3 << "pointer of pointer of givenInt = " << **pointerPointerGivenInt << "\n";

    return 0;
}
