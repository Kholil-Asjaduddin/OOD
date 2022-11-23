#include "personType.h"

personType::personType(std::string fName, std::string lName)
{
	setName(fName, lName);
}

void personType::print() const
{
	std::cout << firstName + " " + lastName;
}

void personType::setName(std::string fName, std::string lName)
{
	firstName = fName;
	lastName = lName;
}

std::string  personType::getFirstName() const
{
	

	return firstName;
}

std::string  personType::getLastName() const
{
	return lastName;
}

