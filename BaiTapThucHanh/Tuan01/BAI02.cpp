#include <iostream>
#include <math.h>
using namespace std;

struct toado {
    int x;
    int y;
};

struct diem {
    toado A;
    toado B;
};

void nhap(toado &A, toado &B){
    cout << "Nhap toa do diem A: " << endl;
    cout << "Nhap x: ";
    cin >> A.x;
    cout << "Nhap y: ";
    cin >> A.y;
    cout << "Nhap toa do diem B: " << endl;
    cout << "Nhap x: ";
    cin >> B.x;
    cout << "Nhap y: ";
    cin >> B.y;
}

float tinhkhoangcach(toado A, toado B){
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

void xuat(toado A, toado B){
    cout << "Khoang cach giua hai diem A(" << A.x << ", " << A.y << ") va B(" << B.x << ", " << B.y << ") la: " << tinhkhoangcach(A, B) << endl;
}

int main(){
    toado A, B;
    nhap(A, B);
    xuat(A, B);
    return 0;
}