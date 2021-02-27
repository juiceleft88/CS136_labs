//Hugo Izquierdo
//header file for creating the class

#pragma once

class romanType
{
    public: //public members
    void printRom (char romNum[7]); //prints as roman numerals
    int printDec (int sum); //prints as a decimal
    int convertRom (char romNum[7]); //converts roman numerals to decimals

    private:
    char romNum[7]; //character array to hold roman numeral types
    int sum; //int for summing decimals
};
