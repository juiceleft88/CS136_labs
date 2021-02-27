//Hugo Izquierdo
//class creation header file

#pragma once

class dayType
{
    public:

    dayType();
    dayType(int day);
    void setDay(int day);
    void printDay();
    int returnDay(int day);
    std::string returnNext();
    std::string returnPrev(int day);
    std::string returnDayCalc( string dayName[7], int indexDay);


    private:
    std::string dayName[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int day;
};