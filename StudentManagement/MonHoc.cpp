#include "MonHoc.h"
#include <iostream>
#include <string>
using namespace std;

void MonHoc::Nhap() {
	cin.ignore();
	cout << "Nhap ten mon hoc: ";
	cin >> tenMonHoc;
	cout << "Nhap so tin chi ";
	cin >> soTinChi;
	maMonHoc = ma++;
}

void MonHoc::Xuat() {
	cout << "Ma mon hoc: " << maMonHoc << endl;
	cout << "Ten mon hoc: " << tenMonHoc << endl;
	cout << "So tin chi " << soTinChi << endl;
}

void MonHoc::Sua(string tenMH, int soTC) {
	tenMonHoc = tenMH;
	soTinChi = soTC;
}

void MonHoc::Xoa() {
	daXoa = true;
}

