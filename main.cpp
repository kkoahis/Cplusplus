#include "LinkedList.h"
#include "Account.h"
#include "Node.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("cls");
	LinkedList *list = new LinkedList();

	list->Insert_Node(new Node(Account(1, "KHOA", 100000000, 's')), 0);
	// lỗi không Insert được node mới vào linked list. Nó chỉ cập nhật được 1 cái Node mà thôi
	list->Insert_Node(new Node(Account(2, "LAM", 100000000, 's')), 10);
	list->Insert_Node(new Node(Account(3, "NGUYET", 100000000, 'c')), 3);

	list->Show_List();

   return 0;
}
