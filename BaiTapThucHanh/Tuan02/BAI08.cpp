//Viết chương trình nhập tọa độ 3 đỉnh A, B, C của 1 tam giác trong mặt phẳng Oxy. Tính chu vi, diện tích và tìm tọa độ trọng tâm. 

#include <iostream>
#include <math.h>
using namespace std;

class Diem{
    private:
        float x, y;
    public:
        void nhap();
        void xuat();
        float getX();
        float getY();
        float ChuVi(Diem A, Diem B, Diem C);
        float DienTich(Diem A, Diem B, Diem C);
        float ToaDoTrongTam(Diem A, Diem B, Diem C);
};

void Diem::nhap(){
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void Diem::xuat(){
    cout << "(" << x << ", " << y << ")";
}

float Diem::getX(){
    return x;
}
float Diem::getY(){
    return y;
}

float Diem::ChuVi(Diem A, Diem B, Diem C){
    float AB = sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
    float BC = sqrt(pow(C.getX() - B.getX(), 2) + pow(C.getY() - B.getY(), 2));
    float CA = sqrt(pow(A.getX() - C.getX(), 2) + pow(A.getY() - C.getY(), 2));
    return AB + BC + CA;
}

float Diem::DienTich(Diem A, Diem B, Diem C){
    float AB = sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
    float BC = sqrt(pow(C.getX() - B.getX(), 2) + pow(C.getY() - B.getY(), 2));
    float CA = sqrt(pow(A.getX() - C.getX(), 2) + pow(A.getY() - C.getY(), 2));
    float p = (AB + BC + CA) / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

float Diem::ToaDoTrongTam(Diem A, Diem B, Diem C){
    float x = (A.getX() + B.getX() + C.getX()) / 3;
    float y = (A.getY() + B.getY() + C.getY()) / 3;
    cout << "(" << x << ", " << y << ")";
}

int main(){
    Diem A, B, C;
    cout << "Nhap toa do diem A: " << endl;
    A.nhap();
    cout << "Nhap toa do diem B: " << endl;
    B.nhap();
    cout << "Nhap toa do diem C: " << endl;
    C.nhap();
    cout << "Chu vi tam giac ABC: " << A.ChuVi(A, B, C) << endl;
    cout << "Dien tich tam giac ABC: " << A.DienTich(A, B, C) << endl;
    cout << "Toa do trong tam tam giac ABC: ";
    A.ToaDoTrongTam(A, B, C);
    return 0;
}