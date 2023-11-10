#include <iostream>

using namespace std;

class CDuongThang{
private:
    float a, b, c;
public:
    CDuongThang(){
        a = 0.0;
        b = 0.0;
        c = 0.0;
    }
    friend istream& operator>>(istream &is, CDuongThang &dt){
        cout << "Nhap a: ";
        is >> dt.a;
        cout << "Nhap b: ";
        is >> dt.b;
        cout << "Nhap c: ";
        is >> dt.c;
        return is;
    }

    friend ostream& operator<<(ostream &os, CDuongThang &dt){
        os << "a: " << dt.a << '\n';
        os << "b: " << dt.b << '\n';
        os << "c: " << dt.c << '\n';
        return os;
    }

};

int main(){
    CDuongThang a;
    cin >> a;
    cout << a;
    return 0;
}