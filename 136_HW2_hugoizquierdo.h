//Hugo Izquierdo
//class creation header file
#pragma once
 //class definition
class dayType
{
    public: //public members

    dayType(); //constructor
    dayType(int d); //constuctor with int parameter
    void setDay(int d); // function to set the day, for the rest of functions to base off of. Does not print anything
    void printDay(); // function to print the day of the week from string array
    int returnDay(); // function to return the numerical day of the week (0-6, with 0 being Sunday)
    std::string returnNext(); //function to return the next day of the week after setDay
    std::string returnPrev(); //functio to return the previous day of the week before setDay
    std::string returnDayCalc(int d); //function to return days prior and days before the setDay. 


    private: //private members
    std::string dayName[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; //string values for days of the week. Cannot figure out how to get warning message to not show up
    int day; //day variable
};
