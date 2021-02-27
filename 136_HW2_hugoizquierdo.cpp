//Hugo Izquierdo
//886895301
//This program implements the day of the week

#include <iostream>
#include <string>
#include "136_HW2_hugoizquierdo.h"

using namespace std;

dayType::dayType()
{
    day = 0;
}

dayType::dayType(int d)
{
    day = d;
}

void dayType::setDay(int d)
{
    day = d;
}

int dayType::getDay()
{
    return day;
}

void dayType::printDay()
{
    cout << "The day is: " << dayName[day] << endl;
}

std::string dayType::returnNext()
{
    int otherDay = (day+1) % 7;
    return dayName[otherDay];
}

std::string dayType::returnPrev()
{
    int otherDay = (7 + (day-1)%7)%7;
    return dayName[otherDay];
}

std::string dayType::returnDayCalc(int d)
{ int otherDay= 0;
        if (d > 0)
    {
        otherDay = (day+d)%7;
        return dayName[otherDay];
    }
    else 
    {
        int otherDay = (7 + (day+d)%7)%7;
        return dayName[otherDay];
    }

}


int main()
{


dayType firstDay;

firstDay.setDay(2);

firstDay.printDay();

cout << "This is day number: " << firstDay.getDay() << endl;

cout << "The next day is: " << firstDay.returnNext() <<endl;

cout << "The previous day was: " << firstDay.returnPrev() << endl;

cout << "In 3 days, it will be: " << firstDay.returnDayCalc(3) << endl;

cout << "2 days ago, it was: " << firstDay.returnDayCalc(-2) <<endl;


return 0;

}