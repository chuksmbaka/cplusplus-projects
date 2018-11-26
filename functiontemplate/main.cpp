#include "main.hpp"

int main()
{
    int number1 = 10;
    int number2 = 20;

    double doublenumber1 = 100.0;
    double doublenumber2 = 120.05;

    char charvalue1 = 'A';
    char charvalue2 = 'B';

    string string1 = "Good morning, ";
    string string2 = "Good afternoon. ";

    cout << "\nsums function on integers: " << sums(number1, number2) <<endl;
    cout << "sums functio on doubles: " << sums(doublenumber1, doublenumber2) << endl;
    cout << "sums function on chars: " << sums(charvalue1, charvalue2) << endl;
    cout << "sums function on strings: " << sums(string1, string2) << endl <<endl;
}