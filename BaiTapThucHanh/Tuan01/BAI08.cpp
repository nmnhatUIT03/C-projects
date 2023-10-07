// ý tưởng: nhập tọa độ 3 điểm A, B, C của tam giác, tính các kích thước.
#include <iostream>
#include <math.h>

using namespace std;

struct diem{
    float x;
    float y;
};

struct tamgiac{
    diem A;
    diem B;
    diem C;
};

void nhap(diem &A, diem &B, diem &C){
    cout << "Nhap x A: ";
    cin >> A.x;
    cout << "Nhap y B: ";
    cin >> B.y;
    cout << "Nhap x B: ";
    cin >> B.x;
    cout << "Nhap y B: ";
    cin >> B.y;
    cout << "Nhap x C: ";
    cin >> C.x;
    cout << "Nhap y C: ";
    cin >> C.y;
}

void xuat(diem A, diem B, diem C){
    cout << "A(" << A.x << ", " << A.y << ")" << endl;
    cout << "B(" << B.x << ", " << B.y << ")" << endl;
    cout << "C(" << C.x << ", " << C.y << ")" << endl;
}

float tinhKhoangCach(diem A, diem B, diem C){
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    return sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
    return sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2));
}

float tinhchuvi(diem A, diem B, diem C){
    return tinhKhoangCach(A, B, C) + tinhKhoangCach(B, C, A) + tinhKhoangCach(C, A, B);
}

float dientich(diem A, diem B, diem C){
    float p = tinhchuvi(A, B, C) / 2;
    return sqrt(p * (p - tinhKhoangCach(A, B, C)) * (p - tinhKhoangCach(B, C, A)) * (p - tinhKhoangCach(C, A, B)));
}

int main(){
    diem A, B, C;
    nhap(A, B, C);
    xuat(A, B, C);
    cout << "Chu vi: " << tinhchuvi(A, B, C) << endl;
    cout << "Dien tich: " << dientich(A, B, C) << endl;
    return 0;
}
