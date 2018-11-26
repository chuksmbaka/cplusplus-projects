#include "main.hpp"

using namespace std;

int main()
{
    const int SIZE = 3;
    Dog roster[SIZE];

    roster[0].setName("Bingo");
    roster[1].setName("Sharky");
    roster[2].setName("Donky");

    roster[0].setLicenseNumber(123);
    roster[1].setLicenseNumber(3456);
    roster[2].setLicenseNumber(8974);
    
    printRoster(roster, SIZE);

    return 0;
}