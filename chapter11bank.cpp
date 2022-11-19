// Programing Exercise Chapter 11

#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bankAccount
{
    char name[100],add[100],y;
    int accountNumber, amount;
    double balance;
public:
    void openAccount ();
    void depositeMoney();
    void withdrawMoney ();
    void displayAccount();
    int setAccountNumber();
    int getAccountNumber();
    double getBalance();

    bankAccount(double balanceDefault){
        balance = balanceDefault;
    }
};

class checkingAccount
{
private:
    /* data */
public:
    checkingAccount(/* args */);
    ~checkingAccount();
};

checkingAccount::checkingAccount(/* args */)
{
}

checkingAccount::~checkingAccount()
{
}


int tambah(double x, double y){
    return x + y;
}

int bankAccount::setAccountNumber(){
    return rand();
}

int bankAccount::getAccountNumber(){
    return accountNumber;
}

double bankAccount::getBalance(){
    return balance;
}

void bankAccount::openAccount()
{
    system("cls");
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your addess ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what type of account you want to open saving (s) or current (c)";
    cin>>y;

    cout<<"Enter amount for deposite ::";
    cin>>balance;

    // accountNumber = rand();
    cout<<"Your account is created with account number : " << accountNumber;
}

void bankAccount::depositeMoney()
{
    int a ;
    // cout<<"Enter PIN::";

    cout<<"Enter how much money you want to deposit::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount\n";
}

void bankAccount::displayAccount()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Enterened your addees ::"<<add<<endl;
    cout<<"Type of account that you open ::"<<y<<endl;
    cout<<"Amount you deposite ::"<<balance<<endl;

}
void bankAccount::withdrawMoney()
{
    cout<<"withdeaw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Now your total amount is left ::"<<balance;
}

int main()
{
    int ch,x,n;
    bankAccount obj;
    system("cls");
    system("color 0A");
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit money \n";
    cout<<"03)WithDraw money \n";
    cout<<"04)Display account\n";
    cout<<"05)Exit\n";
    cout<<"Please sir, select the option from above ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Open account \n";
        obj.openAccount ();
        break;
        case 2:"02)Deposit money \n";
        obj.depositeMoney();
        break;
        case 3:"03)WithDraw money \n";
        obj.withdrawMoney ();
        break;
        case 4:"04)Display account\n";
        obj.displayAccount();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n do you want to select next step then please press::y\n";
    cout<<"if you want to exit then please press:: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}