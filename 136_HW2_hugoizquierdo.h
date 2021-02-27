//Hugo Izquierdo
//class creation header file

#pragma once

class dayType
{
    public:

    dayType();
    dayType(int d);
    void setDay(int d);
    int getDay();
    void printDay();
    int returnDay(int d);
    std::string returnNext();
    std::string returnPrev();
    std::string returnDayCalc(int d);


    private:
    std::string dayName[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int day;
};