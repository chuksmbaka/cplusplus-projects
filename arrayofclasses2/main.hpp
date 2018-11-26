#include <iostream>
#include <iostream>
#include "Dog.cpp"

using namespace std;

void printRoster(Dog roster[], int size); //size represents number of Dogs object

void printRoster(Dog roster[], int size)
{
    for (int i = 0; i < size; i++)
    {
        roster[i].printInfo();
        cout << "\n";
    }
}