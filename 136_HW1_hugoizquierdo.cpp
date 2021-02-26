#include <iostream>
#include <iomanip>
//#include "136_HW1_hugoizquierdo.h"

using namespace std;

int main()
{
    const int SIZE = 7;
    char romNum[SIZE]= {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int decNum[SIZE] = {1, 5, 10, 50, 100, 500, 1000};

    for (int count = 0; count < SIZE; count++)
    {
        romNum[count] = decNum[count];
        cout<< romNum[count] << endl;
    }

    return 0;
}