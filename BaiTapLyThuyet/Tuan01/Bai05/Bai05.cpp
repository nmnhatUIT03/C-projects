//Vi?t ch??ng trình cho phép ng??i dùng nh?p h? tên, ?i?m toán, ?i?m v?n c?a m?t h?c sinh. Tính ?i?m trung bình và xu?t k?t qu? ra màn hình.

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