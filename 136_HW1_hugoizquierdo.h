#pragma once

class romanType
{
    public:
    void printRom (romNum[SIZE]);
    int printDec (decNum[SIZE]);
    int convertRom (int sum);

    private:
    const int SIZE = 7;
    char romNum[SIZE] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int sum;
};
