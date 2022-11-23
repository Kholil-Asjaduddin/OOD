


#include <iostream>
#include <string>
#include "patientType.h"
#include "personType.h"
#include "dateType.h"

//using namespace std;

//inheriting doctor,a
patientType::patientType(std::string ident, std::string f, std::string l, int bMonth, int bDay, int bYear, std::string docFName,
	std::string docLName, std::string docSpec, int aMonth, int aDay, int aYear, int disMonth, int disDay, int disYear)
	:dateOfBirth(bMonth, bDay, bYear), attendingPhysician(docFName, docLName, docSpec), admitDate(aMonth, aDay, aYear),
	dischargeDate(disMonth, disDay, disYear), personType(f, l)
{
	ID = ident;
}


//prints out the patient info
void patientType::print() const
{
	std::cout << "Patient: " << getFirstName() << " "<< getLastName() << "\nID: " << ID << "\tDate Of Birth: " << dateOfBirth.getMonth()
		<< "-" << dateOfBirth.getDay() << "-" << dateOfBirth.getYear() << "\nAttending Physician: " << attendingPhysician.getFirstName()
		<< " " << attendingPhysician.getLastName() << " " << attendingPhysician.getSpecialty() << "\nAdmit Date: "
		<< admitDate.getMonth() << "-" << admitDate.getDay() << "-" << admitDate.getYear() << "\nDischarge Date: "
		<< dischargeDate.getMonth() << "-" << dischargeDate.getDay() << "-" << dischargeDate.getYear();
}

void patientType::setInfo(std::string f, std::string l, std::string ident, int bMonth, int bDay, int bYear, std::string docFName,
	std::string docLName, std::string docSpec, int aMonth, int aDay, int aYear, int disMonth, int disDay, int disYear)
{
	setName(f, l);
	ID = ident;
	dateOfBirth.setDate(bMonth, bDay, bYear);
	attendingPhysician.setName(docFName, docLName);
	attendingPhysician.setSpecialty(docSpec);
	admitDate.setDate(aMonth, aDay, aYear);
	dischargeDate.setDate(disMonth, disDay, disYear);
}

void patientType::setID(std::string ident)
{
	ID = ident;
}

std::string patientType::getID() const
{
	return ID;
}

void patientType::setBirthDate(int m, int d, int y)
{
	dateOfBirth.setDate(m, d, y);
}

int const patientType::getBirthDay() const
{
	return dateOfBirth.getDay();
}

int const patientType::getBirthMonth() const
{
	return dateOfBirth.getMonth();
}

int const patientType::getBirthYear() const
{
	return dateOfBirth.getYear();
}

void patientType::setDoctorName(std::string f, std::string l)
{
	attendingPhysician.setName(f, l);
}

void patientType::setDoctorSpl(std::string s)
{
	attendingPhysician.setSpecialty(s);
}

std::string const patientType::getDoctorFName() const
{
	return attendingPhysician.getFirstName();
}

std::string const patientType::getDoctorLName() const
{
	return attendingPhysician.getLastName();
}

std::string const patientType::getDoctorSpl() const
{
	return attendingPhysician.getSpecialty();
}

void patientType::setAdmDate(int m, int d, int y)
{
	admitDate.setDate(m, d, y);
}

int const patientType::getAdmDay() const
{
	return admitDate.getDay();
}

int const patientType::getAdmMonth() const
{
	return admitDate.getMonth();
}

int const patientType::getAdmYear() const
{
	return admitDate.getYear();
}

void patientType::setDisDate(int m, int d, int y)
{
	dischargeDate.setDate(m, d, y);
}

int const patientType::getDisDay() const
{
	return dischargeDate.getDay();
}

int const patientType::getDisMonth() const
{
	return dischargeDate.getMonth();
}

int const patientType::getDisYear() const
{
	return dischargeDate.getYear();
}
