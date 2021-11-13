#include "Node.h"

Node::Node(HocSinh &z){
	this -> hocsinh = z;

	this -> next =NULL;
}
Node::~Node()
{
	if (this ->next != NULL ) delete this ->next;
}
void Node::printData(){
	this -> hocsinh.Xuat();
}
