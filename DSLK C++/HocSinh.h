#pragma once
#include "DocGia1.h"
#include<iostream>
using namespace	std; 
class HocSinh : public DocGia
{
	string truong;
	string SDT;
public :
	HocSinh();
	HocSinh(string lop,string dob,string hoTen,int Id,string account,string password,string truong,string SDT);
	HocSinh( HocSinh &z);
	~HocSinh();
	void Nhap();
	void Xuat();
};
