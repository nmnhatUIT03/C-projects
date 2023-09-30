//
#include <iostream>

using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};

void NhapPhanSo(PhanSo& ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.tu;
	cout << "Nhap mau so: ";
	cin >> ps.mau;
}

// tính t?ng, hi?u ??c, th??ng, tích 2 phân s?
PhanSo TinhTong(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	ps.mau = ps1.mau * ps2.mau;
	return ps;
}

PhanSo TinhHieu(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	ps.mau = ps1.mau * ps2.mau;
	return ps;
}

PhanSo TinhTich(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tu = ps1.tu * ps2.tu;
	ps.mau = ps1.mau * ps2.mau;
	return ps;
}

PhanSo TinhThuong(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tu = ps1.tu * ps2.mau;
	ps.mau = ps1.mau * ps2.tu;
	return ps;
}

void xuatPhanSo(PhanSo ps)
{
	cout << ps.tu << "/" << ps.mau << endl;
}

int main() {
	PhanSo ps1, ps2;
	cout << "Nhap phan so thu nhat: " << endl;
	NhapPhanSo(ps1);
	cout << "Nhap phan so thu hai: " << endl;
	NhapPhanSo(ps2);
	cout << "Tong 2 phan so: ";
	xuatPhanSo(TinhTong(ps1, ps2));
	cout << "Hieu 2 phan so: ";
	xuatPhanSo(TinhHieu(ps1, ps2));
	cout << "Tich 2 phan so: ";
	xuatPhanSo(TinhTich(ps1, ps2));
	cout << "Thuong 2 phan so: ";
	xuatPhanSo(TinhThuong(ps1, ps2));
	return 0;

}