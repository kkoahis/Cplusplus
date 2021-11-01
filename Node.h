#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class Node
{
    public:
        Account account;
        Node* next = NULL;
        
    public:
        Node(Account account);
        ~Node();
        void Show_Node();    
};
