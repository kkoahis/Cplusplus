#include "LinkedList.h"

LinkedList::LinkedList() {
    this->size = 0;
    this->head = NULL;
    this->tail = NULL;
}

// next dang la` private, su dung ham ban de lay NODE* next ra
LinkedList::~LinkedList() {
    while (this->head != NULL) {
        Node* CurrentNode = this-> head;
        this-> head = this -> head-> next;
        CurrentNode-> next = NULL;
        delete CurrentNode;
    }
}

int LinkedList::Getsize()
{
    return this->size;
}

// next dang la` private, su dung ham ban de lay NODE* next ra
void LinkedList::Show_List() {
    cout << endl << "List of Account" << endl;
    cout << "Size: " << this -> size << endl;

    Node* CurrentNode = this->head;
    while (CurrentNode != NULL) {
        CurrentNode->Show_Node();
        cout << endl;
        CurrentNode = CurrentNode->next;
    }
}

// next dang la` private, su dung ham ban de lay NODE* next ra
void LinkedList::Insert_Node(Node* node, int position) {
    void _Creat_Account();
    if(this-> head == NULL || position < 1) {
        //insert in front
        node-> next = this-> head;
        this-> head = node;
        if(this-> tail == NULL) {
            this-> tail = node;
        }
    }
    this->size++;
    return;

    if(position >= this-> size) {
        //insert in last
        this-> tail-> next = node;
        this-> tail = node;
        this-> size++;
        return;
    }

    Node* PreNode = NULL;
    Node* CurrentNode = this-> head;
    int pos = 0;
    while (pos < position) {
        pos++;
        PreNode = CurrentNode;
        CurrentNode = CurrentNode-> next;
    }
    node-> next = CurrentNode;
    PreNode-> next = node;
    this-> size++;
}

// next dang la` private, su dung ham ban de lay NODE* next ra
// su dung ham ban de lay ID cua Account ra 
void LinkedList::Delete_Node(int accID) {
    if(this-> head == NULL)
        return;

    Node* PreNode = NULL;
    Node* CurrentNode = this-> head;
    while (CurrentNode != NULL) {
        if(CurrentNode-> account._GetAccID() == accID) {
            if(PreNode == NULL) {
                //delete front
                this-> head = this-> head-> next;
                if(this-> head == NULL){
                    this-> tail = NULL;
                }
            }
            else if (this-> tail == CurrentNode) {
                //delete last
                if(PreNode != NULL) {
                    PreNode-> next = NULL;
                }
                this-> tail = PreNode;
            }
            else {
                //delete in the midle
                PreNode-> next = CurrentNode-> next;
            }
            CurrentNode-> next = NULL;
            delete CurrentNode;
            this-> size--;
            return;
        }
    }
    PreNode = CurrentNode;
    CurrentNode = CurrentNode-> next;
}

// next dang la` private, su dung ham ban de lay NODE* next ra
// su dung ham ban de lay ID cua Account ra 
Node* LinkedList::Search_Node(int accID) {
    Node* CurrentNode = this->head;
    while (CurrentNode != NULL) {
        if(CurrentNode-> account._GetAccID() == accID) {
            return CurrentNode;
        }
        CurrentNode = CurrentNode-> next;
    }
    cout << "NO FIND ACC ID: " << accID << endl;
    return NULL;
}
