//Viết chương trình nhập vào hai phân số. Tìm phân số lớn nhất và xuất kết quả.
#include <iostream> 
using namespace std;
class PhanSo{
    private:
        int tu, mau;
    public:
        void nhap();
        void xuat();
        PhanSo lonNhat(PhanSo);
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

PhanSo PhanSo::lonNhat(PhanSo p){
    PhanSo kq;
    if (tu * p.mau > p.tu * mau){
        kq.tu = tu;
        kq.mau = mau;
    }else{
        kq.tu = p.tu;
        kq.mau = p.mau;
    }
    return kq;
}

int main(){
    PhanSo p1, p2, p3;
    p1.nhap();
    p2.nhap();
    p3 = p1.lonNhat(p2);
    cout << "Phan so lon nhat la: ";
    p3.xuat();
    return 0;
}