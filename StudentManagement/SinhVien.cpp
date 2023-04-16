#include "SinhVien.h"
#include <iostream>
using std::cout, std::cin;

void SinhVien::Nhap()
{
	cout << "Nhap ten: ";
	cin >> tenSV;
	cout << "Gioi tinh (0-Nu, 1-Nam): ";
	cin >> gioiTinh;
	cout << "Email: ";
	cin >> email;
	cout << "Ma lop hoc: ";
	cin >> maLH;
}

void SinhVien::Xuat()
{
	cout << "SV: " << tenSV
		<< ", " << gioiTinh
		<< ", " << email;
}

void SinhVien::Sua(string tenSV, string email, string maLH, int gioiTinh)
{
	this->tenSV = tenSV;
	this->email = email;
	this->maLH = maLH;
	this->gioiTinh = gioiTinh;
}

void SinhVien::Xoa()
{
	daXoa = true;
}
