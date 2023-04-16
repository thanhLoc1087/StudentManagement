#include "LopHoc.h"
#include <iostream>
#include <string>
using namespace std;

void LopHoc::Nhap() {
	cin.ignore();
	cout << "Nhap ma lop hoc: ";
	cin >> maLopHoc;
	cout << "Nhap ten lop hoc: ";
	cin >> tenLopHoc;
	cout << "Nhap ma mon hoc: ";
	cin >> maMonHoc;
	cout << "Nhap tiet bat dau: ";
	cin >> tietBatDau;
	cout << "Nhap tiet ket thuc : ";
	cin >> tietKetThuc;
}

void LopHoc::Xuat() {
	cout << "Ma ma lop hoc: " << maLopHoc << endl;
	cout << "Ten lop hoc: " << tenLopHoc << endl;
	cout << "Ma mon hoc: " << maMonHoc << endl;
	cout << "Tiet bat dau: " << tietBatDau << endl;
	cout << "Tiet ket thuc: " << tietKetThuc << endl;
}

void LopHoc::Sua(string maLH, string tenLH, string maMH, int tietBD, int tietKT) {
	maLopHoc = maLH;
	tenLopHoc = tenLH;
	maMonHoc = maMH;
	tietBatDau = tietBD;
	tietKetThuc = tietKT;
}

void LopHoc::Xoa() {
	daXoa = true;
}

