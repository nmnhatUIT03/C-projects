//xây dựng các lớp đối tượng và thực hiện yêu cầu: viết chương trình nhập vào một phân số, hãy cho biết phân số đó là dương hay âm
#include <iostream>
using namespace std;
 class PhanSo {
        private:
            int tu, mau;
        public:
            void nhap();
            void xuat();
            void xet();
};
    
void PhanSo::nhap() {
        cout << "Nhap tu so: ";
        cin >> tu;
        cout << "Nhap mau so: ";
        cin >> mau;
}

void PhanSo::xuat() {
        cout << tu << "/" << mau << endl;
}
void PhanSo::xet(){
    if (tu * mau > 0){
        cout << "Phan so " << tu << "/" << mau << " la phan so duong" << endl;
    }else{
        if (tu * mau < 0){
            cout << "Phan so " << tu << "/" << mau << " la phan so am" << endl;
        }else{
            cout << "Phan so " << tu << "/" << mau << " = 0" << endl;
    }
    }
}

int main(){
    PhanSo p;
    p.nhap();
    p.xuat();
    p.xet();
    return 0;
}