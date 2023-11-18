#include <iostream>
using namespace std;
#include "PhanSo.h"


istream& operator>>(istream &is, CPhanSo &p){
    cout << "Nhap tu: ";
    is >> p.tu;
    cout << "Nhap mau: ";
    is >> p.mau;
    return is;
}

ostream& operator<<(ostream &os, CPhanSo &p){
    os << "Tu: " << p.tu << '\n';
    os << "Mau: " << p.mau << '\n';
    return os;
}