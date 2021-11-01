#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
    public:
        int size = 0;
        Node *head;
        Node *tail;

    public:
        LinkedList();
        ~LinkedList();

        //void getAccountout();
        int Getsize();
        void Insert_Node(Node* node, int position);
        void Delete_Node(int accID);
        void Show_List();
        Node* Search_Node(int accID);
};
