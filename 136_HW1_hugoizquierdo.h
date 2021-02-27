//Hugo Izquierdo
//header file for creating the class

#pragma once

class romanType
{
    public:
    void printRom (char romNum[7]);
    int printDec (int sum);
    int convertRom (char romNum[7]);

    private:
    char romNum[7];
    int sum;
};
