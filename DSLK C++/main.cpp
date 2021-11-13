#include <iostream>
#include "LinkedList.h"
#include "DocGia1.h"
#include "HocSinh.h"
#include "Sinhvien.h"
#include "Node.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout<<"-------------Hoc sinh-------------"<<endl;
	LinkedList *list=new LinkedList();
	list -> insertNode(new Node(HocSinh("Tan","Tan","Tan",8,"Tan","Tan","Tan","Tan")),0)
	list -> printList();
	return 0; 
}

