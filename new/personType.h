
#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H



#include <iostream>
#include <iomanip>
#include <string>





class personType {
protected:
	std::string firstName;
	std::string lastName;
	
public:

	personType(std::string fName = " ", std::string lName= " "  );

	void print() const;

	void setName(std::string fName, std::string lName);

	std::string  getFirstName() const;

	std::string  getLastName() const;


	
};



#endif // !PERSON_TYPE_H