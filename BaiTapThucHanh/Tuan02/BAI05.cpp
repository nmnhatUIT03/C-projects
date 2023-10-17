//Viết chương trình nhập vào 2 số phức. Tính tổng, hiệu, tích và xuất kết quả.
#include <iostream>
using namespace std;

class SoPhuc{
    private:
        float a, b;
    public:
        void nhap();
        void xuat();
        SoPhuc tong(SoPhuc);
        SoPhuc hieu(SoPhuc);
        SoPhuc tich(SoPhuc);
};

void SoPhuc::nhap(){
    cout << "Nhap phan thuc: ";
    cin >> a;
    cout << "Nhap phan ao: ";
    cin >> b;
}

void SoPhuc::xuat(){
    cout << a << " + " << b << "i" << endl;
}

SoPhuc SoPhuc::tong(SoPhuc p){
    SoPhuc kq;
    kq.a = a + p.a;
    kq.b = b + p.b;
    return kq;
}

SoPhuc SoPhuc::hieu(SoPhuc p){
    SoPhuc kq;
    kq.a = a - p.a;
    kq.b = b - p.b;
    return kq;
}

SoPhuc SoPhuc::tich(SoPhuc p){
    SoPhuc kq;
    kq.a = a * p.a - b * p.b;
    kq.b = a * p.b + b * p.a;
    return kq;
}

int main(){
    SoPhuc p1, p2, p3;
    p1.nhap();
    p2.nhap();
    p3 = p1.tong(p2);
    cout << "Tong hai so phuc la: ";
    p3.xuat();
    p3 = p1.hieu(p2);
    cout << "Hieu hai so phuc la: ";
    p3.xuat();
    p3 = p1.tich(p2);
    cout << "Tich hai so phuc la: ";
    p3.xuat();
    return 0;
}