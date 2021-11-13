#include "Sinhvien.h"
#include<iostream>
using namespace std;
Sinhvien::Sinhvien():DocGia(){
	
	this -> khoa ="";
	this -> SDT = "";
	this -> CMND = "";
}
Sinhvien::Sinhvien(string lop,string dob,string hoTen,int Id,string account,string password,string khoa,string SDT,string CMND)
:DocGia(lop,dob,hoTen,Id,account,password){
	this -> khoa = khoa ;
	this -> SDT =SDT;
	this -> CMND = CMND;
}
Sinhvien::Sinhvien( Sinhvien &y):DocGia(y){

	this -> khoa = khoa ;
	this -> SDT =SDT;
	this -> CMND = CMND;
}
Sinhvien::~Sinhvien(){
}
void Sinhvien::Nhap(){
	DocGia::Nhap();
	cout<<"\n Nhap khoa :" ; cin >> khoa;
	cout<<"\n Nhap CMND :" ; cin >> CMND;
	cout<<"\n Nhap SDT :" ; cin >> SDT;
}
void Sinhvien::Xuat(){
	DocGia::Xuat();
	cout << this->khoa; 
	cout << this->CMND;
	cout << this->SDT;
}
