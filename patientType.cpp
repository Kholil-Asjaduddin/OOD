#include "personType.hpp"
#include <iostream>
#include <string>

class patientType: public personType {
   public:
    // Constructor
    patientType();
    // Copy Constructor
    patientType(std::string, std::string, int, std::string, std::string, std::string, std::string, std::string);

    // Functions
    void display();

    // Mutators
    void SET_PatientID(std::string);
    void SET_DOB(std::string);
    void SET_PhysicianName(std::string);
    void SET_DateOfAdmit(std::string);
    void SET_DateOfRelease(std::string);

    // Accessors
    std::string GET_PatientID() const;
    std::string GET_DOB() const;
    std::string GET_PhysicianName() const;
    std::string GET_DateOfAdmit() const;
    std::string GET_DateOfRelease() const;

   private:
    std::string patient_ID;
    std::string DOB;
    std::string physicianName;
    std::string dateOfAdmit;
    std::string dateOfRelease;
};

//**************** CONSTRUCTOR ****************************
patientType::patientType() {
    firstName     = "NULL";
    lastName      = "NULL";
    age           = -1;
    patient_ID    = "NULL";
    DOB           = "NULL";
    physicianName = "NULL";
    dateOfAdmit   = "NULL";
    dateOfRelease = "NULL";
} //*******************************************************

//************ COPY CONSTRUCTOR ***************************
patientType::patientType(std::string f, std::string l, int a, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5) {
    firstName     = f;
    lastName      = l;
    age           = a;
    patient_ID    = s1;
    DOB           = s2;
    physicianName = s3;
    dateOfAdmit   = s4;
    dateOfRelease = s5;
} //*******************************************************

//************** FUNCTIONS ********************************
void patientType::display() {
    std::cout << "\n\nFirst Name      : " << firstName; 
    std::cout << "\nLast Name       : " << lastName;
    std::cout << "\nAge             : " << age;
    std::cout << "\nPatient's ID    : " << patient_ID;
    std::cout << "\nDate of Birth   : " << DOB;
    std::cout << "\nPhysician's Name: " << physicianName;
    std::cout << "\nDate of Admit   : " << dateOfAdmit;
    std::cout << "\nDate of Release : " << dateOfRelease;
} //*******************************************************

//************* MUTATORS **********************************
void patientType::SET_PatientID(std::string s) {
    patient_ID = s;
}

void patientType::SET_DOB(std::string s) {
    DOB = s;
}

void patientType::SET_PhysicianName(std::string s) {
    physicianName = s;
}

void patientType::SET_DateOfAdmit(std::string s) {
    dateOfAdmit = s;
}

void patientType::SET_DateOfRelease(std::string s) {
    dateOfRelease = s;
} //*******************************************************

//************** ACCESSORS ********************************
std::string patientType::GET_PatientID() const {
    return patient_ID;
}

std::string patientType::GET_DOB() const {
    return DOB;
}

std::string patientType::GET_PhysicianName() const {
    return physicianName;
}

std::string patientType::GET_DateOfAdmit() const {
    return dateOfAdmit;
}

std::string patientType::GET_DateOfRelease() const {
    return dateOfRelease;
}