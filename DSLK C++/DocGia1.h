#pragma once
#include<iostream>
using namespace std;
class DocGia
{
protected:
	string lop;
	string dob;
	string hoTen;
	int Id;
	string account;
	string password;
//	Ds_sach ds;
public:
	DocGia();
//	int getID();
	DocGia(string lop,string dob,string hoTen,int Id,string account,string password);
	DocGia( DocGia &x);
	~DocGia(); 
	void setHoTen(string hoTen);
	string getHoTen();
	void setID(int Id);
	int getID();
	void setTK(string account);
	string getTK();
	void setMK(string password);
	string getMK();
	void Nhap();
	void Xuat();
};

