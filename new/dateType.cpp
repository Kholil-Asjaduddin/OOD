#include "dateType.h"

dateType::dateType(int mon, int day, int year)
{
    setDate(mon,day,year);
}


void dateType::printDate() const
{
    std::cout << dMonth <<  + "-" << dDay << "-" << + dYear;
}

void dateType::setDate(int mon, int day, int year) 
{
    dMonth = mon;
    dDay = day;
    dYear = year;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getYear() const
{
    return dYear;
}

int  dateType::getMonth () const
{
    return dMonth;
}

