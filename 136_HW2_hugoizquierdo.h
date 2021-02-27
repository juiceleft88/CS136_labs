//Hugo Izquierdo
//class creation header file

#pragma once

class dayType
{
    dayType();
    dayType(string dayName[7]);

    public:
    void setDay(string daySet);
    void printDay(string dayName);
    int returnDay(int dayReturn);
    int prevDay(int dayBefore);
    int returnDay( string dayName[7], int indexDay);


    private:
    string dayName[7];
    int day;
}