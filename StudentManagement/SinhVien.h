#pragma once
#include <string>
using std::string;

class SinhVien
{
private:
	string maSV;
	string tenSV;
	string email;
	string maLH;
	int gioiTinh;
	bool daXoa;

public:
	SinhVien() {
		daXoa = false;
	}
	SinhVien(string maSV, string tenSV, string email, string maLH, int gioiTinh) {
		this->maSV = maSV;
		this->tenSV = tenSV;
		this->email = email;
		this->maLH = maLH;
		this->gioiTinh = gioiTinh;
		daXoa = false;
	}
	void Nhap();
	void Xuat();
	void Sua(string, string, string, int);
	void Xoa();
};