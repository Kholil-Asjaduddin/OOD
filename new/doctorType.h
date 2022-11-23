
#ifndef DOCTOR_TYPE_H
#define DOCTOR_TYPE_H

#include "personType.h"

class doctorType:public personType
{
private:
	std::string specialty;

public:

	doctorType(std::string fn = " ", std::string ln = " ", std::string splty = " ");

	void print() const;

	void setSpecialty(std::string splty);

	std::string getSpecialty() const;





};


#endif // !DOCTOR_TYPE_H

