#include<iostream>
#include "Node.h"
class LinkedList
{
		int size;
		Node *head;
		Node *tail;
	public:
		LinkedList();
		~LinkedList();
		
		int  getSize();
		void printList();
		void insertNode(Node *node,int position); 
		void deleteNode(int IdHocSinh);
		Node* searchNode(int IdHocSinh);
};


