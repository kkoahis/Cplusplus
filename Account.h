#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
    public:
        int ID;
        string Name;
        int Deposit;
        char Type;

    public:
        Account() : Account(0, " ", 0, ' ') {};
        Account(int id, string name, int deposit, char type);   
        ~Account();

        void _Show_1_Account();     // show 1 Account
        void _Creat_Account();                
        void _Modify();             //chinh sua lai Account
        void _Deposit(int);         // gui tien vao Account
        void _Withdraw(int);        // rut tien tu Account
        void _Report() const;       // hien thi du lieu

        int _GetAccID() const;      //get AccountNumber 
        int _GetBal() const;        //get balanceAmount 
        char _GetAccType() const;   //get AccountType 
};
