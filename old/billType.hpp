#ifndef BILLTYPE_HPP
#define BILLTYPE_HPP

#include <string>

class billType {
   public:
    // Constructor
    billType();
    // Copy Constructor
    billType(std::string, double, double, double);

    // functions
    void display();
    
    // Mutators
    void SET_PatientID(std::string);
    void SET_MedicineCost(double);
    void SET_DoctorCost(double);
    void SET_RoomCost(double);

    // Accessors
    std::string GET_PatientID() const;
    double      GET_MedicineCost() const;
    double      GET_doctorCost() const;
    double      GET_RoomCost() const;
    
   private:
    // Data members
    std::string patient_ID;
    double      medicineCost;
    double      doctorCost;
    double      roomCost;
};

#endif