#include "personType.hpp"
#include <iostream>
#include <string>

class doctorType: public personType {
   public:
    // Constructor
    doctorType();
    // Copy Constructor
    doctorType(std::string, std::string, int, std::string);

    // Functions
    void display();

    // Mutator
    void SET_Specialty(std::string s);

    // Accessor
    std::string GET_Specialty() const;
   
   private:
    // Data Members
    std::string specialty;
};

//**************** CONSTRUCTOR ****************************
doctorType::doctorType() {
    firstName = "NULL";
    lastName  = "NULL";
    age       = -1;
    specialty = "NULL";
} //*******************************************************

//************** COPY CONSTRUCTOR *************************
doctorType::doctorType(std::string f, std::string l, int a, std::string s) {
    firstName = f;
    lastName  = l;
    age       = a;
    specialty = s;
} //*******************************************************

//***************** FUNCTIONS *****************************
void doctorType::display() {
    std::cout << "\n\nFirst Name: " << firstName;
    std::cout << "\nLast Name : " << lastName;
    std::cout << "\nAge       : " << age;
    std::cout << "\nSpecialty : " << specialty;
} //*******************************************************

//************** MUTATOR **********************************
void doctorType::SET_Specialty(std::string s) {
    specialty = s;
} //*******************************************************

//**************** ACCESSOR *******************************
std::string doctorType::GET_Specialty() const {
    return specialty;
}