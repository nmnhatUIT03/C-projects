#include <iostream>
using namespace std;
//khai báo lớp
class CPhanSo{
    private:
    int tu;
    int mau;
    public:
    CPhanSo();
    CPhanSo(int, int);
    CPhanSo(const CPhanSo&);
    ~CPhanSo();

};

//định nghĩa hàm thiết lập mặc định
CPhanSo::CPhanSo(){
    tu = 0;
    mau = 1;
}

//định nghĩa phương thức thiết lập sao chép
CPhanSo::CPhanSo(const CPhanSo& ps){
    tu = ps.tu;
    mau = ps.mau;
}

//định nghĩa phương thức thiết lập khi biết đầy đủ thông tin
CPhanSo::CPhanSo(int t, int m){
    tu = t;
    mau = m;
}

//định nghĩa phương thức phá hủy

CPhanSo::~CPhanSo(){
    return;
}