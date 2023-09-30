//Viết chương trình cho phép người dùng nhập vào một phân số, rút gọn phân số và xuất kết quả ra màn hình.

#include <iostream>	
using namespace std;

struct PhanSo {
	int tu;
	int mau;
};

void nhap(PhanSo& p) {
	cout << "Nhap tu so: ";
	cin >> p.tu;
	cout << "Nhap mau so: ";
	cin >> p.mau;
	if (p.tu == 0) {
		cout << "0";
		return;
	}
	else if ((p.tu != 0) && (p.mau == 0)) {
		(p.mau == 0);
		cout << "Khong hop le";
		return;
	}

}

void rutGon(PhanSo& p) {
	int a = p.tu;
	int b = p.mau;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	p.tu /= a;
	p.mau /= a;
}

void xuat(PhanSo& p) {
	if (p.mau == 1) {
		cout << p.tu;
	}
	else if (p.mau == -1) {
		cout << -p.tu;
	}
	else if (p.mau < 0) {
		cout << -p.tu << "/" << -p.mau << endl;
	}
	else {
		cout << p.tu << "/" << p.mau << endl;
	}

	cout << "";
	cout << "Phan so sau khi rut gon: " << p.tu << "/" << p.mau << endl;
}
int main() {
	PhanSo p;
	nhap(p);
	rutGon(p);
	xuat(p);
	return 0;

}
