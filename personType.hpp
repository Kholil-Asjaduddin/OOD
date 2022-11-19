
#ifndef PERSONTYPE_HPP
#define PERSONTYPE_HPP

#include <iostream>
#include <string>

class personType {
   public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setName(std::string first, std::string last);
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last

    void setAge(int a);
    // I add this mutator

    std::string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of the data member firstName
    //               is returned.

    std::string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of the data member lastName
    //               is returned.

    //I added this constructor
    personType();

    personType(std::string first, std::string last, int age);
    //constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are empty strings.
    //Postcondition: firstName = first; lastName = last

   protected:
    std::string firstName;  //variable to store the first name
    std::string lastName;   //variable to store the last name
    int age;
};

//i made this constructor
personType::personType() {
    firstName = "NULL";
    lastName  = "NULL";
    age       = -1;
}

//constructor
personType::personType(std::string first, std::string last, int a) { 
    firstName = first;
    lastName = last;
    age = a;
}

void personType::print() const {
    std::cout << firstName << " " << lastName;
}

void personType::setName(std::string first, std::string last) {
    firstName = first;
    lastName = last;
}

// I added this mutator
void personType::setAge(int a) {
    age = a;
}

std::string personType::getFirstName() const {
    return firstName;
}

std::string personType::getLastName() const {
    return lastName;
}

#endif