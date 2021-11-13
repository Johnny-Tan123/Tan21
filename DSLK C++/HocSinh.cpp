#include "HocSinh.h"
#include<iostream>
using namespace std;
HocSinh::HocSinh(){
	this -> truong = "";
	this -> SDT = "";
}
HocSinh::HocSinh(string lop,string dob,string hoTen,int Id,string account,string password,string truong,string SDT)
:DocGia(lop,dob,hoTen,Id,account,password){
	this -> truong = truong ;
	this -> SDT =SDT;
}
HocSinh::HocSinh( HocSinh &z){
	this -> truong = z.truong ;
	this -> SDT = z.SDT;
}
HocSinh::~HocSinh(){
	
}
void HocSinh::Nhap(){
	DocGia::Nhap();
	cout<<"\n Nhap truong : ";cin>> truong;
	cout<<"\n Nhap SDT : ";cin >>SDT;
}
void HocSinh::Xuat(){
	DocGia::Xuat();
	cout <<"Truong :" <<this->truong ;
	cout <<"SDT :" <<this->SDT;
}
