/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    int userInput[40];
    ifstream inputfile ("arrayinput.txt");


    //cout << "get input from keyboard or file: "<<endl;
    //get input from keyboard or file
    for(int i = 0; i < 40; i++)
    {
        inputfile >> userInput[i];
    }

    //display from first to last
    cout << "display from first to last: \n";
    for(int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    cout << endl;
    cout << endl;

    //display from last to first
    cout << "display from last to first: \n";
    for(int i = 39; i >= 0; i--)
    {
        cout <<  userInput[i] << " ";
    }
    cout << endl;
    cout << endl;

    //sort in ascending order
    for (int i = 0; i < 40; i++)
    {
        int extra = 0;
        int least = userInput[i];

        for (int k = 0; k < 40; k++)
        {
            if (userInput[k] > userInput[i])
            {
                extra = userInput[i];
                userInput[i] = userInput[k];
                userInput[k] = extra;
            }
        }
    }

    cout << "\nAcsending Order:"<<endl;
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }


    cout << endl;
    cout << endl;
    //sort in descending order
    for (int i = 0; i < 40; i++)
    {
        int extra = 0;
        int least = userInput[i];

        for (int k = 0; k < 40; k++)
        {
            if (userInput[k] < userInput[i])
            {
                extra = least;
                least = userInput[k];
                userInput[k] = extra;
            }
        }
    }
    cout << "\nDescending Order:"<<endl;
    for (int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    cout<<"\n\n";
    return 0;
}
