#include <iostream>

using namespace std;

struct Phanso{
    int tu;
    int mau;
};



void nhap(Phanso &p){
    cout << "Nhap tu so phan so: ";
    cin >> p.tu;
    cout << "Nhap mau so phan so: ";
    cin >> p.mau;
}

int main(){
    Phanso p1, p2;
    nhap(p1);
    nhap(p2);
    int sum = 0;
    int dif = 0;
    if (p1.mau = p2.mau){
        sum = p1.tu + p2.tu;
        dif = p1.tu - p2.tu;
        cout << "Tong hai phan so la: " << sum << "/" << p1.mau << endl;
        cout << "Hieu hai phan so la: " << dif << "/" << p1.mau << endl;
    }else{
        sum = p1.tu * p2.mau + p2.tu * p1.mau;
        dif = p1.tu * p2.mau - p2.tu * p1.mau;
        cout << "Tong hai phan so la: " << sum << "/" << p1.mau * p2.mau << endl;
        cout << "Hieu hai phan so la: " << dif << "/" << p1.mau * p2.mau << endl;
    }
    int mul = p1.tu * p2.tu;
    cout << "Tich hai phan so la: " << mul << "/" << p1.mau * p2.mau << endl;
    int div = p1.tu * p2.mau;
    cout << "Thuong hai phan so la: " << div << "/" << p1.mau * p2.tu << endl;
    return 0;
}

