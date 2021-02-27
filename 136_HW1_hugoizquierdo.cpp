// Hugo Izquierdo
//886895301
//This program will store a roman numeral, and display it as either a decimal number or a roman numeral.

#include <iostream>
#include "136_HW1_hugoizquierdo.h"

using namespace std;

void romanType::printRom(char romNum[7]) //prints the roman numeral characters from array
{
    cout << "The number in Roman numeral form is: " << romNum << endl;
}

int romanType::printDec(int sum) //prints the decimal numbers from array
{
    cout << "The number in decimal form is: " << sum << endl;
    return sum;
}

int romanType::convertRom(char romNum[]) //converts roman numerals to decimals through a combination of switch statements and if statements
{
    int length = 0;
    length = strlen(romNum); //setting length variable to be the length of entered characters
    int decTotal = 0; //setting dectotal accumulator to 0
    int tally; //to hold count through iteration

    for (int index = 0; index < length; index++) //for loop to iterate through switch statement multiple times if needed
    {
        switch (romNum[index]) //switch statement to assign values to roman numeral types
        {
            case 'M' : tally = 1000; //flat values given for chars M , D, C, L and V
            break;

            case 'D' : tally = 500;
            break;

            case 'C' : tally = 100;
            break;

            case 'L' : tally = 50;
            break;

            case 'X' : //for cases X and I, need to put conditionals if it comes either before or after one of the other numerals. This dictates wether it is added or subtracted
            if (romNum[index] && romNum[index +1] == 'L' || romNum[index +1] == 'C' || romNum[index +1] == 'M') //if entered value is x, and following calues are L,C, or M,
            tally = (-10); // subtract 10
            else 
            tally = 10; //if not, then add ten (because it will come after the other char)
            break;

            case 'V' : tally = 5;
            break;

            case 'I' : //same fomrat as X, but now including X as a possible char to be added / subtracted to
            if (romNum[index] && romNum[index +1] == 'V' || romNum[index +1] == 'X' || romNum[index +1] == 'C' || romNum[index +1] == 'M')
            tally = (-1);
            else
            tally = 1;
            break;

            default: 
            cout << "You did not enter a valid Roman Numeral";
        }
        decTotal = decTotal + tally; //keep the total of each iteration and add here
    }
    cout << decTotal << endl; //output the total
    return decTotal;
}




int main()
{
    char romNum[7];
    romanType x;
    char selection;
    int sum;

    cout << "Enter a Roman Numeral (CAPITAL LETTERS ONLY), and this program will convert it to decimal form, or display as a Roman Numeral: ";
    cin >> romNum; //for user to enter the roman numerals. Works with capital letters only.
    cout << "\n Press R to print as a Roman Numeral, or D to print as a Decimal. "  << endl;
    cin >> selection; //can select whether the entered value is printed as a roman numeral or as a decimal, as per assignment instructions.
    
    if (selection == 'R' || selection == 'r') //choice can be entered in lowercase or uppercase
        x.printRom(romNum);
    else if (selection == 'D' || selection == 'd')
        x.convertRom(romNum);
    
    while ((selection != 'D' && selection != 'd') && (selection != 'R' && selection != 'r')) //if not a proper choice, will ask user to reenter
        cout << "Please re-enter a valid selection: " << endl;
        cin >> selection;

    
    return 0;
}
