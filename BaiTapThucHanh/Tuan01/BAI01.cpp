#include <iostream>

using namespace std;

struct Phanso{
    int tu;
    int mau;
};

void nhap(Phanso &p){
    cout << "Nhap tu so: ";
    cin >> p.tu;
    cout << "Nhap mau so: ";
    cin >> p.mau;
}

void xetps (Phanso p){
    if (p.tu * p.mau > 0){
        cout << "Phan so " << p.tu << "/" << p.mau << " la phan so duong" << endl;
    }else{
        if (p.tu * p.mau < 0){
            cout << "Phan so " << p.tu << "/" << p.mau << " la phan so am" << endl;
        }else{
            cout << "Phan so " << p.tu << "/" << p.mau << " = 0" << endl;
    }
    }
}
int main(){
    Phanso p;
    nhap(p);
    xetps(p);
    return 0;
}