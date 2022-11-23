
#include <iostream>
#include <string>
#include "patientType.h"
#include "billType.h"

using namespace std;

int main()
{
    patientType newPatient;
    billType bill;

    string str1 = "", str2 = "", str3 = "";

    cout << "Enter patient's ID: ";
    cin >> str1;
    cout << endl;

    newPatient.setID(str1);
    bill.setID(str1);

    cout <<"Enter patient's first name: ";
    cin >> str1;
    cout << endl;

    cout << "Enter patient's last name: ";
    cin >> str2;
    cout << endl;

    newPatient.setName(str1, str2);
	newPatient.setBirthDate(12, 11, 1985);

    cout <<"Enter doctor's first name: ";
    cin >> str1;
    cout << endl;

    cout << "Enter doctor's last name: ";
    cin >> str2;
    cout << endl;

    newPatient.setDoctorName(str1, str2);

    cout << "Enter doctor's speciality: ";
	cin.ignore(100,'\n');
    getline(cin,str1,'\n');
    cout << endl;

    newPatient.setDoctorSpl(str1);

    newPatient.setAdmDate(8, 21, 2020);
    newPatient.setDisDate(8, 28, 2020);

    bill.setPharmacyCharges(245.50);
    bill.setRoomRent(2500.00);
    bill.setDoctorFee(3500.38);

	bill.updatePharmacyCharges(200.00);
	bill.updateRoomRent(500.00);
	bill.updateDoctorFee(1000.00);

    newPatient.print();
    bill.printBill();

	system("pause");
    
    return 0;
}