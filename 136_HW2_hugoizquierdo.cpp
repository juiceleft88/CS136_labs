//Hugo Izquierdo
//886895301
//This program implements the day of the week

#include <iostream>
#include <string>
#include "136_HW2_hugoizquierdo.h" //including .h file

using namespace std;


dayType::dayType() //constructor
{
    day = 0;
}

dayType::dayType(int d) //constructor with integer parameter
{
    day = d;
    
}

void dayType::setDay(int d) //sets integer value for day
{
    day = d;
}

int dayType::returnDay() //returns integer value for day
{
    return day;
}

void dayType::printDay()
{
    cout << "The day is: " << dayName[day] << endl; //prints string elements from array according to day that was set
}

std::string dayType::returnNext() //returns the next day in the form of string from array. 
{
    int otherDay = (day+1) % 7; // variable otherDay to manipulate array. Modulus used for giving proper day of week.
    return dayName[otherDay];
}

std::string dayType::returnPrev() 
{
    int otherDay = (7 + (day-1)%7)%7; // variable otherDay used to manipulate array. Modulus used for giving proper day of week. Got this portion of code from the book, wasn't sure how to do the math properly for the 'previous day'.
    return dayName[otherDay];
}

std::string dayType::returnDayCalc(int d) //used if / else-if statement to calculate whether the days were positive (x days from now) or negative (previous days from the day)
{ int otherDay= 0;
        if (d > 0) //if the day count is positive, means its in the future, means day addition will occur
    {
        otherDay = (day+d)%7;
        return dayName[otherDay];
    }
    else 
    {
        int otherDay = (7 + (day+d)%7)%7; //but if day count is negative, means its in the past, means day subtraction will occur
        return dayName[otherDay];
    }

}


int main()
{
//invoking functions
dayType firstDay; //creating an object of dayType

firstDay.setDay(2); //change the argument from 2 to any other number to set the day

firstDay.printDay(); //prints the day

cout << "This is day number: " << firstDay.returnDay() << endl;

cout << "The next day is: " << firstDay.returnNext() <<endl;

cout << "The previous day was: " << firstDay.returnPrev() << endl;

cout << "In 3 days, it will be: " << firstDay.returnDayCalc(3) << endl; //positive number as an argument will add that many days into the future

cout << "2 days ago, it was: " << firstDay.returnDayCalc(-2) <<endl; //negative number as an argument will subtract that many days from the current day.


return 0;

}