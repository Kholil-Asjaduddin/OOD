#include "billType.cpp"
#include "doctorType.cpp"
#include "patientType.cpp"

void menu();
void billForum();
void doctorForum();
void patientForum();

billType bill;
doctorType doctor;
patientType patient;

int main() {
    char more;
    //main loop
    do {

        menu();
        int n;
        std::cin >> n;
        //takes user input from menu options and acts upon it.
        switch(n)
        {
            case 1:
                billForum();
                break;

            case 2:
                doctorForum();
                break;

            case 3:
                patientForum();
                break;

            default:
                std::cout << "\n\nPlease enter a valid number...";
        }


        std::cout << "\n\n\n\t\t\tDo more (Y/N) ?";
        std::cin  >> more;
    } while(more == 'y' || more == 'Y');

    return 0;
}

void menu() {
    //just the main menu options.
    std::cout << "\n\n\n";
    std::cout << "1) bill forum\n";
    std::cout << "2) doctor forum\n";
    std::cout << "3) patient forum\n";
    std::cout << ">> Choose the number that corresponds with the forum you want to fill out: ";
}

void billForum() {
    std::string s;
    double num;
    //get info from user
    std::cout << "\n\nEnter patients ID: ";
    std::cin  >> s;
    bill.SET_PatientID(s);

    std::cout << "\nEnter medicine costs: ";
    std::cin  >> num;
    bill.SET_MedicineCost(num);

    std::cout << "\nEnter doctor costs: ";
    std::cin  >> num;
    bill.SET_DoctorCost(num);

    std::cout << "\nEnter room costs: ";
    std::cin  >> num;
    bill.SET_RoomCost(num);

    //displays info stored in bill.
    bill.display();
}

void doctorForum() {
    std::string s1, s2;
    int num;
    //get info from user.
    std::cout << "\n\nEnter first name: ";
    std::cin  >> s1;
    std::cout << "\nEnter last name: ";
    std::cin  >> s2;
    doctor.setName(s1, s2);

    std::cout << "\nEnter age: ";
    std::cin  >> num;
    doctor.setAge(num);

    std::cout << "\nEnter doctor's specialty: ";
    std::cin  >> s1;
    doctor.SET_Specialty(s1);

    //displays all the info stored in doctor.
    doctor.display();
}

void patientForum() {
    std::string s1, s2;
    int num;
    //get info from user.
    std::cout << "\n\nEnter first name: ";
    std::cin  >> s1;
    std::cout << "\nEnter last name: ";
    std::cin  >> s2;
    patient.setName(s1, s2);

    std::cout << "\nEnter age: ";
    std::cin  >> num;
    patient.setAge(num);

    std::cout << "\nEnter patient's ID: ";
    std::cin  >> s1;
    patient.SET_PatientID(s1);

    std::cout << "\nEnter date of birth: ";
    std::cin  >> s1;
    patient.SET_DOB(s1);

    std::cout << "\nEnter physician's name: ";
    std::cin  >> s1;
    patient.SET_PhysicianName(s1);

    std::cout << "\nEnter date of admittance: ";
    std::cin  >> s1;
    patient.SET_DateOfAdmit(s1);

    std::cout << "\nEnter date of release: ";
    std::cin  >> s1;
    patient.SET_DateOfRelease(s1);

    //displays info stored in patient.
    patient.display();
}