//Vi?t ch??ng trình cho phép ng??i dùng nh?p vào m?t ngày (ngày tháng n?m). Tìm ngày k? ti?p và xu?t k?t qu? ra màn hình.

#include <iostream>
using namespace std;

struct date
{
	int ngay;
	int thang;
	int nam;
};

void input(date& d)
{
	cout << "Nhap ngay: ";
	cin >> d.ngay;
	cout << "Nhap thang: ";
	cin >> d.thang;
	cout << "Nhap nam: ";
	cin >> d.nam;
}

void output(date d)
{
	cout << "Ngay " << d.ngay << "/" << d.thang << "/" << d.nam << endl;
}

bool kiemtranamnhuan(int nam)
{
	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
		return true;
	return false;
}

int ngaycuathang(int thang, int nam)
{
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31; break;
	case 4: case 6: case 9: case 11:
		return 30; break;
	case 2:
		if (kiemtranamnhuan(nam))
			return 29;
		return 28;
	}
}

date ngayketiep(date d)
{
	if (d.ngay == ngaycuathang(d.thang, d.nam))
	{
		d.ngay = 1;
		if (d.thang == 12)
		{
			d.thang = 1;
			d.nam++;
		}
		else
			d.thang++;
	}
	else
		d.ngay++;
	return d;
}

int main()
{
	date d;
	input(d);
	output(d);
	date next = ngayketiep(d);
	cout << "Ngay ke tiep: ";
	output(next);
	return 0;
}