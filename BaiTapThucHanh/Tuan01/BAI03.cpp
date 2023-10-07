#include <iostream>

using namespace std;

struct Phanso{
    int tu;
    int mau;
};

struct Phantu{
    Phanso p1;
    Phanso p2;
};

void nhap(Phantu &p){
    cout << "Nhap tu so phan so thu nhat: ";
    cin >> p.p1.tu;
    cout << "Nhap mau so phan so thu nhat: ";
    cin >> p.p1.mau;
    cout << "Nhap tu so phan so thu hai: ";
    cin >> p.p2.tu;
    cout << "Nhap mau so phan so thu hai: ";
    cin >> p.p2.mau;
}

void sosanh(Phanso p1, Phanso p2){
    if (p1.tu * p2.mau > p2.tu * p1.mau){
        cout << "Phan so thu nhat lon nhat" << endl;
    }else{
        if (p1.tu * p2.mau < p2.tu * p1.mau){
            cout << "Phan so thu hai lon nhat " << endl;
        }else{
            cout << "Phan so thu nhat bang phan so thu hai" << endl;
        }
    }
}

int main(){
    Phantu p;
    nhap(p);
    sosanh(p.p1, p.p2);
    return 0;
}