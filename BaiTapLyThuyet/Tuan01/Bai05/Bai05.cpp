//Vi?t ch??ng tr�nh cho ph�p ng??i d�ng nh?p h? t�n, ?i?m to�n, ?i?m v?n c?a m?t h?c sinh. T�nh ?i?m trung b�nh v� xu?t k?t qu? ra m�n h�nh.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string tenhocsinh;
	float toan, van, trungbinh;
	cout << "Nhap ho ten: ";
	getline(cin, tenhocsinh);
	cout << "Nhap diem toan: ";
	cin >> toan;
	cout << "Nhap diem van: ";
	cin >> van;
	trungbinh = (toan + van) / 2;
	cout << "Diem trung binh cua " << tenhocsinh << " la: " << trungbinh << endl;
	return 0;
}