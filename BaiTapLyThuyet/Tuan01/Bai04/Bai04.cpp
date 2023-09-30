#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void sapxep(int a[], int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >= i + 1; j--)
		{
			if (a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1]; 
				a[j - 1] = temp;
			}
		}
	}
}

int main()
{
	int a[100], n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	nhap(a, n);
	cout << "Mang vua nhap la: ";
	xuat(a, n);
	sapxep(a, n);
	cout << "\nMang sau khi sap xep la: ";
	xuat(a, n);
	return 0;
}