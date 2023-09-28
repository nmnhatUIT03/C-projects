#include <iostream>

using namespace std;

struct PhanSo {
	int tu;
	int mau;
};

void nhap(PhanSo& ps) {
	cout << "Nhap tu so: ";
	cin >> ps.tu;
	cout << "Nhap mau so: ";
	cin >> ps.mau;
}

void xuat(PhanSo ps) {
	cout << ps.tu << "/" << ps.mau << endl;
}

// rút gọn phân số
void rutGon(PhanSo& ps) {
	int a = ps.tu;
	int b = ps.mau;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	cout << "1" << endl;
}
int main() {

	PhanSo ps;
	nhap(ps);
	xuat(ps);
	rutGon(ps);
	xuat(ps);

	return 0;

}