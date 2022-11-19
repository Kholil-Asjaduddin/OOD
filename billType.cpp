
#include "billType.hpp"
#include <iostream>
#include <string>

//**************** CONSTRUCTOR ****************************
billType::billType() {
    patient_ID   = "NULL";
    medicineCost = 0.0;
    doctorCost   = 0.0;
    roomCost     = 0.0;
} //*******************************************************

//************* COPY CONSTRUCTOR **************************
billType::billType(std::string p, double mc, double dc, double rc) {
    patient_ID   = p;
    medicineCost = mc;
    doctorCost   = dc;
    roomCost     = rc;
} //*******************************************************

//*************** FUNCTIONS *******************************
void billType::display() {
    std::cout << "\n\nPatient's ID  : " << patient_ID;
    std::cout << "\nMedicine Costs: $" << medicineCost;
    std::cout << "\nDoctor Costs  : $" << doctorCost;
    std::cout << "\nRoom Costs    : $" << roomCost;
} //*******************************************************

//**************** MUTATORS *******************************
void billType::SET_PatientID(std::string x) {
    patient_ID = x;
}

void billType::SET_MedicineCost(double x) {
    medicineCost = x;
}

void billType::SET_DoctorCost(double x) {
    doctorCost = x;
}

void billType::SET_RoomCost(double x) {
    roomCost = x;
} //*******************************************************

//*************** ACCESSORS *******************************
std::string billType::GET_PatientID() const {
    return patient_ID;
}

double billType::GET_MedicineCost() const {
    return medicineCost;
}

double billType::GET_doctorCost() const {
    return doctorCost;
}

double billType::GET_RoomCost() const {
    return roomCost;
}