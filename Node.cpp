#include "Node.h"

Node::Node(Account account) {
    this->account = account;
    this->next = NULL;
}

Node::~Node() {
    if(this->next != NULL) delete this->next;
}

void Node::Show_Node()
{
    this->account._Show_1_Account();
}
