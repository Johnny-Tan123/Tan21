#pragma once
//#include"MuonSach.h"
#include "DocGia1.h"
#include<iostream>
using namespace	std; 
class Sinhvien : public DocGia
{
private:
	string khoa;
	string SDT;
	string CMND;
public :
	Sinhvien();
	Sinhvien(string lop,string dob,string hoTen,int Id,string account,string password,string khoa,string SDT,string CMND);
	Sinhvien( Sinhvien &y);
	~Sinhvien();
	void Nhap();
	void Xuat();
};
