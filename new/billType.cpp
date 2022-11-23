#include "billType.h"
#include <iostream>
#include <iomanip>


billType::billType(std::string id, double phrCharges, double rmRent, double docFee)
{
	setInfo(id, phrCharges, rmRent, docFee);
	
}

//print out the charges
void billType::printBill() const
{
	std::cout << "\n \nPharmacy Charges: " <<std::right << std::setw(3) << std::fixed << std::setprecision(2)<< "$"<< pharmacyCharges << std::endl;
	std::cout << "Room Charges: " << std::right << std::setw(7) << std::fixed << std::setprecision(2) << "$" << roomRent << std::endl;
	std::cout << "Doctor's Fees: " << std::right << std::setw(6) << std::fixed << std::setprecision(2) << "$" << doctorFee << std::endl;
	std::cout << "____________________________" << std::endl;
	std::cout << "Total: " << std::right << std::setw(14) << std::fixed << std::setprecision(2) << "$" << pharmacyCharges + roomRent + doctorFee << std::endl;
}

//assign values to data members 
void billType::setInfo(std::string id, double phrCharges, double rmRent, double docFee)
{
	iD = id;
	pharmacyCharges = phrCharges;
	roomRent = rmRent;
	doctorFee = docFee;
}

void billType::setID(std::string id)
{
	iD = id;
}

std::string billType::getID() const
{
	return iD;
}

void billType::setPharmacyCharges(int phrCharges)
{
	pharmacyCharges = phrCharges;
}

double billType::getPharmacyCharges() const
{
	return pharmacyCharges;
}

//add additional charges to pharmacy charges
void billType::updatePharmacyCharges(double extraChrg)
{
	pharmacyCharges += extraChrg;
}

void billType::setRoomRent(double charge)
{
	roomRent = charge;
}

double const billType::getRoomRent()
{
	return roomRent;
}

//updates roomrent
void billType::updateRoomRent(double charge)
{
	roomRent += charge;
}

void billType::setDoctorFee(double charge)
{
	doctorFee = charge;
}



double const billType::getDoctorFee()
{
	return doctorFee;
}

void billType::updateDoctorFee(double charge)
{
	doctorFee += charge;
}

//Adds up the total
double const billType::billingAmount()
{
	double total = pharmacyCharges + roomRent + doctorFee;
	return total;
}

