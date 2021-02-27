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

std::string dayType::returnDayCalc()
{
    if (otherDay>0)
    {
        int otherDay = (day+d)%7;
        return dayName[otherDay];
    }
    else 
    {
        int otherDay = (7 + (day-1)%7)%7;
        return dayName[otherDay];
    }


}


int main()
{

dayType firstDay;

cout << "First day set to Monday" << endl;
firstDay.setDay(1);

cout << "This is day number: " << firstDay.getDay() <<endl;

cout << "The current day is: " << firstDay.printDay();

cout << "The next day is: " << firstDay.returnNext() <<endl;

cout << "The previous day was: " << firstDay.returnPrev() << endl;


    return 0;

}