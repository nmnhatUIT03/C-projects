#include <iostream>

using namespace std;

class CPhanSo{
private:
    int tu, mau;
public:
    CPhanSo(){
        tu = 0;
        mau = 1;
    }
    friend istream& operator>>(istream &is, CPhanSo &p);

    friend ostream& operator<<(ostream &os, CPhanSo &p);
};
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

int main(){
    CPhanSo a;
    cin >> a;
    cout << a;
    return 0;
}