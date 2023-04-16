#pragma once
#include <string>
using std::string;

class LopHoc
{
private:
	string maLopHoc;
	string tenLopHoc;
	string maMonHoc;
	int tietBatDau;
	int tietKetThuc;
	bool daXoa;
public:
	LopHoc() {
		this->daXoa = false;
	}
	LopHoc(string maLopHoc, string tenLop, string maMonHoc, int tietBatDau, int tietKetThuc) {
		this->maLopHoc = maLopHoc;
		this->tenLopHoc = tenLop;
		this->maMonHoc = maMonHoc;
		this->tietBatDau = tietBatDau;
		this->tietKetThuc = tietKetThuc;
		this->daXoa = false;
	}
	void Nhap();
	void Xuat();
	void Sua(string maLopHoc, string tenLop, string maMonHoc, int tietBatDau, int tietKetThuc);
	void Xoa();
};
