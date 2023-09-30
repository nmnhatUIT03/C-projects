#include <iostream>
#include <string>
using namespace std;

struct hocsinh
{
	string tenhocsinh;
	float toan;
	float van;
	float trungbinh;
};

void nhapds(hocsinh ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten hoc sinh thu " << i + 1 << ": ";
		getline(cin, ds[i].tenhocsinh);
		cout << "Nhap diem toan: ";
		cin >> ds[i].toan;
		cout << "Nhap diem van: ";
		cin >> ds[i].van;
		cin.ignore();
	}
}

void tinhdiemtrungbinhhs(hocsinh ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ds[i].trungbinh = (ds[i].toan + ds[i].van) / 2;
	}
}

void sapxepdiemtrungbinhhs(hocsinh ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >= i + 1; j--)
		{
			if (ds[j].trungbinh > ds[j - 1].trungbinh)
			{
				hocsinh temp = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = temp;
			}
		}
	}
}

void xuatdstheothutusapxep(hocsinh ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hoc sinh thu " << i + 1 << ": " << ds[i].tenhocsinh << endl;
		cout << "Diem toan: " << ds[i].toan << endl;
		cout << "Diem van: " << ds[i].van << endl;
		cout << "Diem trung binh: " << ds[i].trungbinh << endl;
	}
}
int main()
{
	hocsinh ds[100];
	int n;
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;
	cin.ignore();
	nhapds(ds, n);
	tinhdiemtrungbinhhs(ds, n);
	sapxepdiemtrungbinhhs(ds, n);
	xuatdstheothutusapxep(ds, n);
	return 0;
}