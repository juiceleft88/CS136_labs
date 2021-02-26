#include <iostream>
#include <iomanip>
//#include "136_HW1_hugoizquierdo.h"

using namespace std;

void romanType::printRom(char romNum(SIZE))
{
    cout << "The number in Roman numeral form is: " << romNum << endl;
}

int romanType::printDec(int sum)
{
    cout << "The number in decimal form is: " << sum << endl;
    return sum;
}

int romanType::convertRom(char romNum(SIZE))
{
    int length = 0;
    length = strlength(romNum);
    int decTotal = 0;
    int sum;

    for (int count = 0; count < length; count++)
    {
        switch (romNum[count])
        {
            case 'M' : count = 1000;
            break;

            case 'D' : count = 500;
            break;

            case 'C' : count = 100;
            break;

            case 'L' : count = 50;
            break;

            case 'X' : count = 10;
            break;

            case 'V' : count = 5;
            break;

            case 'I' : count = 1;
            break;

            default: 
            cout << "You did not enter a valid Roman Numeral";
        }
        dectotal = decTotal + count;
    }
    cout << decTotal << endl;
    return decTotal;
}




int main()
{
    const int SIZE = 7;
    char romNum[SIZE]= {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int decNum[SIZE] = {1, 5, 10, 50, 100, 500, 1000};

    for (int count = 0; count < SIZE; count++)
    {
        cout<< *(romNum+1) << endl;
    }

    return 0;
}
