#include "DocGia1.h"
#include<iostream>
using namespace std;
DocGia::DocGia(){
	this -> lop ="";
	this -> dob ="";
	this -> hoTen ="";
	this -> Id = 0;
	this -> account = "";
	this -> password = "";
}
DocGia::DocGia(string lop,string dob,string hoTen,int Id,string account,string password)
{
	this -> lop =lop;
	this -> dob =dob;
	this -> hoTen =hoTen;
	this -> Id = Id;
	this -> account = account;
	this -> password = password;
}
DocGia::DocGia( DocGia &x){
	this -> lop =x.lop;
	this -> dob =x.dob;
	this -> hoTen =x.hoTen;
	this -> Id = x.Id;
	this -> account = x.account;
	this -> password = x.password;
}

DocGia::~DocGia()
{
	
}
void DocGia::setHoTen(string hoTen)	{
	this -> hoTen = hoTen;
}
string DocGia::getHoTen(){
	return hoTen;
}
void DocGia::setID(int Id){
	this -> Id = Id;
}
int DocGia::getID(){
	return Id ;
}
void DocGia::setTK(string account){
	this -> account= account;
}
string DocGia::getTK(){
	return account;
}
void DocGia::setMK(string password){
	this -> password=password;
}
string DocGia::getMK(){
	return password;
}
void  DocGia::Nhap(){
	cout << "\n nhap lop :"; cin >> lop;
	cout << "\n nhap ngay thang nam sinh :"; cin >> dob;
	cout << "\n nhap ho va ten :"; cin >> hoTen;
	cout << "\n nhap ID :"; cin >> Id;
	cout << "\n nhap tai khoan :"; cin >> account;
	cout << "\n nhap mat khau :"; cin >> password;
}
void DocGia::Xuat(){
	cout <<"Lop :" <<this->lop ;
	cout <<"Ngay thang nam sinh:"<<this->dob ;
	cout <<"Ho va ten:"<<this->hoTen ;
	cout <<"ID :" <<this->Id;
	cout <<"tai khoan" <<this-> account;
	cout <<"mat khau" <<this->password;
}
