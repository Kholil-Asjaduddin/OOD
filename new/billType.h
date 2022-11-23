#ifndef BILL_TYPE_H
#define BILL_TYPE_H

#include <iostream>
#include <iomanip>
#include <string>



class billType {
	std::string  iD;
	double pharmacyCharges;
	double roomRent;
	double doctorFee;

public:
	billType(std::string id = " ", double phrCharges = 0.0, double rmRent = 0.0, double docFee = 0.0);

	void printBill() const;

	void setInfo(std::string id, double phrCharges, double rmRent, double docFee);

	void setID(std::string id);
	std::string getID() const;

	void setPharmacyCharges(int phrCharges);
	double getPharmacyCharges() const;
	void updatePharmacyCharges(double extraChrg);
	void setRoomRent(double charge);
	double const getRoomRent();
	void updateRoomRent(double charge);
	void setDoctorFee(double charge);
	double const getDoctorFee();
	void updateDoctorFee(double charge);
	double const billingAmount();








};


#endif // !BILL_TYPE_H


