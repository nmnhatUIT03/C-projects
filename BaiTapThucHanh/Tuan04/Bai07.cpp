#include <iostream>

using namespace std;

class CThoiGian{
private:
    int gio, phut, giay;
public:
    CThoiGian(){
        gio = 0;
        phut = 0;
        giay = 0;
    }
    friend istream& operator>>(istream &is, CThoiGian &tg){
        cout << "Nhap gio: ";
        is >> tg.gio;
        cout << "Nhap phut: ";
        is >> tg.phut;
        cout << "Nhap giay: ";
        is >> tg.giay;
        return is;
    }

    friend ostream& operator<<(ostream &os, CThoiGian &tg){
        os << "Gio: " << tg.gio << '\n';
        os << "Phut: " << tg.phut << '\n';
        os << "Giay: " << tg.giay << '\n';
        return os;
    }

};

int main(){
    CThoiGian a;
    cin >> a;
    cout << a;
    return 0;
}