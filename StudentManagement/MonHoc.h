#pragma once
#include <string>
using std::string;

class MonHoc
{
private:
	static int ma;
	string maMonHoc;
	int soTinChi;
	string tenMonHoc;
	bool daXoa;
public:
	MonHoc() {
		this->maMonHoc = ma++;
		this->daXoa = false;
	}
	MonHoc(int soTinChi, string tenMonHoc) {
		this->maMonHoc = ma++;
		this->soTinChi = soTinChi;
		this->tenMonHoc = tenMonHoc;
		this->daXoa = false;
	}
	void Nhap();
	void Xuat();
	void Sua(string tenMH, int soTC);
	void Xoa();
};

