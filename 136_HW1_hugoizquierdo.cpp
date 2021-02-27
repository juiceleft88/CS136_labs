#include <iostream>
#include "136_HW1_hugoizquierdo.h"

using namespace std;

void romanType::printRom(char romNum[7])
{
    cout << "The number in Roman numeral form is: " << romNum << endl;
}

int romanType::printDec(int sum)
{
    cout << "The number in decimal form is: " << sum << endl;
    return sum;
}

int romanType::convertRom(char romNum[])
{
    int length = 0;
    length = strlen(romNum);
    int decTotal = 0;
    int tally;
    int sum;

    for (int index = 0; index < length; index++)
    {
        switch (romNum[index])
        {
            case 'M' : tally = 1000;
            break;

            case 'D' : tally = 500;
            break;

            case 'C' : tally = 100;
            break;

            case 'L' : tally = 50;
            break;

            case 'X' : 
            if (romNum[index] && romNum[index +1] == 'L' || romNum[index +1] == 'C' || romNum[index +1] == 'M')
            tally = (-10);
            else 
            tally = 10;
            break;

            case 'V' : tally = 5;
            break;

            case 'I' : 
            if (romNum[index] && romNum[index +1] == 'V' || romNum[index +1] == 'X' || romNum[index +1] == 'C' || romNum[index +1] == 'M')
            tally = (-1);
            else
            tally = 1;
            break;

            default: 
            cout << "You did not enter a valid Roman Numeral";
        }
        decTotal = decTotal + tally;
    }
    cout << decTotal << endl;
    return decTotal;
}




int main()
{
    char romNum[7];
    romanType x;
    char selection;
    int sum;

    cout << "Enter a Roman Numeral: ";
    cin >> romNum;
    cout << "\n Enter R to print as a Roman Numeral, or D to print as a Decimal. "  << endl;
    cin >> selection; 
    
    if (selection == 'R')
        x.printRom(romNum);
    else if (selection == 'D')
        x.convertRom(romNum);
    
    while (selection != 'D' && selection != 'R')
        cout << "Please re-enter a valid selection: " << endl;
        cin >> selection;

    
    return 0;
}
