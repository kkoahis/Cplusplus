#include "Account.h"
#include <iomanip>
#include <iostream>
#include <string>


using namespace std;

Account::Account(int id, string name, int deposit, char type)
{
    this-> ID = id;
    this-> Name = name;
    this-> Deposit = deposit;
    this-> Type = type;
}

void Account::_Creat_Account(){
    cout << "Nhap ID can tao: " << endl;
    cin >> ID;  
    cout << "Nhap vao ten can tao: " << endl;
    cin.ignore();
    getline(cin, Name);
    while (true)
    {
        cout << "Nhap loai the can tao (Checking / Saving): " << endl;
        cin >> Type;
        Type = toupper(Type);
        if(Type == 'C' || Type == 'S')
            break;
    }
    cout << "Nhap vao so tien ban dau: " << endl;
    cin >> Deposit;
    cout << ".............Account Creatd........." << endl; 
}

Account::~Account(){
    // cout << endl << "DESTRUCTION 1 ACCOUNT" << endl;
}

void Account :: _Deposit(int deposit){
    this -> Deposit += deposit; 
}

void Account ::_Withdraw(int deposit){
    this -> Deposit -= deposit;
}

void Account :: _Show_1_Account() {
    cout << endl << "show_1_Account:" << endl;
    cout << "Account ID: " << this-> ID << endl;
    cout << "Ten chu the: " << this-> Name << endl;
	cout << "Loai Account: " << this-> Type << endl;
	cout << "So du kha dung: " << this-> Deposit << endl;
}

void Account :: _Report() const
{
    // ham` trình bày 
    // su dung thu vien iomanip
    cout << ID << setw(10) << " " << Name << setw(10) << " " << Type << setw(10) << Deposit << endl;
}

int Account :: _GetAccID() const
{
    return this -> ID;
}

int Account :: _GetBal() const
{
    return this -> Deposit;
}

char Account :: _GetAccType() const
{
    return this -> Type;
}

void Account :: _Modify()
{
    cout << endl << "Account ID: " << this-> ID;
    cout << endl << "Enter Account User Name: ";
    cin.ignore();
    getline(cin, Name);
    while (true)
    {
        cout << "Nhap loai the can tao (Checking / Saving): " << endl;
        cin >> Type;
        Type = toupper(Type);
        if(Type == 'C' || Type == 'S')
            break;
    }
    cout << endl << "Modify Balance Amount: ";
    cin >> this-> Deposit;
}
