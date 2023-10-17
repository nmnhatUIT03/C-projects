//Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.
#include <iostream>
using namespace std;

class PhanSo{
    private:
        int tu, mau;
    public:
        void nhap();
        void xuat();
        PhanSo tong(PhanSo);
        PhanSo hieu(PhanSo);
        PhanSo tich(PhanSo);
        PhanSo thuong(PhanSo);
};

void PhanSo::nhap(){
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
}

void PhanSo::xuat(){
    cout << tu << "/" << mau << endl;
}

PhanSo PhanSo::tong(PhanSo p){
    PhanSo kq;
    kq.tu = tu * p.mau + p.tu * mau;
    kq.mau = mau * p.mau;
    return kq;
}

PhanSo PhanSo::hieu(PhanSo p){
    PhanSo kq;
    kq.tu = tu * p.mau - p.tu * mau;
    kq.mau = mau * p.mau;
    return kq;
}

PhanSo PhanSo::tich(PhanSo p){
    PhanSo kq;
    kq.tu = tu * p.tu;
    kq.mau = mau * p.mau;
    return kq;
}

PhanSo PhanSo::thuong(PhanSo p){
    PhanSo kq;
    kq.tu = tu * p.mau;
    kq.mau = mau * p.tu;
    return kq;
}

int main(){
    PhanSo p1, p2, p3;
    p1.nhap();
    p2.nhap();
    p3 = p1.tong(p2);
    cout << "Tong hai phan so la: ";
    p3.xuat();
    p3 = p1.hieu(p2);
    cout << "Hieu hai phan so la: ";
    p3.xuat();
    p3 = p1.tich(p2);
    cout << "Tich hai phan so la: ";
    p3.xuat();
    p3 = p1.thuong(p2);
    cout << "Thuong hai phan so la: ";
    p3.xuat();
    return 0;
}