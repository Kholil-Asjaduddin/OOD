#include "doctorType.h"
#include "personType.h"

doctorType::doctorType(std::string fn, std::string ln, std::string splty): personType(fn,ln)
{
    
    setSpecialty(splty);
}

void doctorType::print() const
{
    std::cout << firstName + " " + lastName + " " + specialty;
}

void doctorType::setSpecialty(std::string splty)
{
    specialty = splty;
}

std::string doctorType::getSpecialty() const
{
    return specialty;
}


