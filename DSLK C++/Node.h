#pragma once
#include <iostream>
#include "HocSinh.h"

class Node{
public:
	HocSinh hocsinh;
	Node* next = NULL;
public: 
	Node(HocSinh &z);
	~Node();
	void printData();
};

