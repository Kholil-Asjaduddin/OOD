
#ifndef DATE_TYPE_H
#define DATE_TYPE_H	

#include <iostream>



class dateType {

	int dMonth;
	int dDay;
	int dYear;

public:

	dateType(int mon = 1, int day = 1, int year = 1900);

	void printDate() const;

	void setDate(int mon, int day, int year) ;

	int  getMonth() const;

	int  getDay() const;

	int  getYear() const;

};



#endif // !DATE_TYPE_H