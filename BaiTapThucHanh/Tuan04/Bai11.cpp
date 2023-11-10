#include <iostream>

using namespace std;

class CTamGiac{
private:
    float a, b, c;
public:
    CTamGiac(){
        a = 0.0;
        b = 0.0;
        c = 0.0;
    }
    friend istream& operator>>(istream &is, CTamGiac &tg){
        cout << "Nhap a: ";
        is >> tg.a;
        cout << "Nhap b: ";
        is >> tg.b;
        cout << "Nhap c: ";
        is >> tg.c;
        return is;
    }

    friend ostream& operator<<(ostream &os, CTamGiac &tg){
        os << "a: " << tg.a << '\n';
        os << "b: " << tg.b << '\n';
        os << "c: " << tg.c << '\n';
        return os;
    }

};

int main(){
    CTamGiac a;
    cin >> a;
    cout << a;
    return 0;
}