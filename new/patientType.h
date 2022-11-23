
#ifndef PATIENT_TYPE_H
#define PATIENT_TYPE_H





#include <iostream>
#include <string>
#include "personType.h"
#include "dateType.h"
#include "doctorType.h"

//using namespace std;

class patientType :public personType
{
private:
	std::string ID;
	dateType dateOfBirth;
	doctorType attendingPhysician;
	dateType admitDate;
	dateType dischargeDate;

public:
	patientType(std::string ident = " ", std::string f = " ", std::string l = " ",  int bMonth = 1, int bDay = 1, int bYear = 1900,
		std::string docFName = " ", std::string docLName = " ", std::string docSpec = " ", int aMonth = 1, int aDay = 1,
		int aYear = 1900, int disMonth = 1, int disDay = 1, int disYear = 1900);
	void print()const;
	void setInfo(std::string ident, std::string f, std::string l,  int bmont, int bday, int byear, std::string docFName,
		std::string docLName, std::string docSpec, int aMonth, int aDay, int aYear, int disMonth, int disDay, int disYear);
	void setID(std::string ident);
	std::string getID()const;
	void setBirthDate(int m, int d, int y);
	int const getBirthDay()const;
	int const getBirthMonth()const;
	int const getBirthYear()const;
	void setDoctorName(std::string f, std::string l);
	void setDoctorSpl(std::string s);
	std::string const getDoctorFName()const;
	std::string const getDoctorLName()const;
	std::string const getDoctorSpl()const;
	void setAdmDate(int m, int d, int y);
	int const getAdmDay()const;
	int const getAdmMonth()const;
	int const getAdmYear()const;
	void setDisDate(int m, int d, int y);
	int const getDisDay()const;
	int const getDisMonth()const;
	int const getDisYear()const;
};


#endif // !PATIENT_TYPE_H
