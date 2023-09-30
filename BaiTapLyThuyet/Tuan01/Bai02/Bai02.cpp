#include <iostream>

using namespace std;

struct PhanSo
{
	int tuSo;
	int mauSo;
};

PhanSo p1, p2;

void nhap(PhanSo& p) {
	cout << "Nhap vao tu so: ";
	cin >> p.tuSo;
	cout << "Nhap vao mau so: ";
	cin >> p.mauSo;
}

void rutGon(PhanSo& p) {
	int a = p.tuSo;
	int b = p.mauSo;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	p.tuSo /= a;
	p.mauSo /= a;
}

bool operator>(PhanSo& p1, PhanSo& p2) {
	
	rutGon(p1);
	rutGon(p2);

	
	return (p1.tuSo * p2.mauSo) > (p2.tuSo * p1.mauSo);
}

bool operator<(PhanSo& p1,PhanSo& p2) {
	
	rutGon(p2);

	
	return (p1.tuSo * p2.mauSo) < (p2.tuSo * p1.mauSo);
}

void xuat(PhanSo& p) {
	cout << "Phan so thu nhat: " << p.tuSo << "/" << p.mauSo << endl;
	cout << "Phan so thu hai: " << p.tuSo << "/" << p.mauSo << endl;
}

int main() {
	PhanSo p1, p2;
	cout << "Nhap vao hai phan so: " << endl;
	cout << "Nhap vao phan so thu nhat: " << endl;
	nhap(p1);
	cout << "Nhap vao phan so thu hai: " << endl;
	nhap(p2);

	
	if (p1 > p2) {
		cout << "Phân s? th? nh?t l?n h?n phân s? th? hai." << endl;
	}
	else if (p1 < p2) {
		cout << "Phân s? th? hai l?n h?n phân s? th? nh?t." << endl;
	}
	else {
		cout << "Hai phân s? b?ng nhau." << endl;
	}

	return 0;
}
