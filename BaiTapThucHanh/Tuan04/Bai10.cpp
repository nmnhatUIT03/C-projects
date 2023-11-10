#include <iostream>

using namespace std;

class CDuongTron{
private:
    float x, y, r;
public:
    CDuongTron(){
        x = 0.0;
        y = 0.0;
        r = 0.0;
    }
    friend istream& operator>>(istream &is, CDuongTron &dt){
        cout << "Nhap x: ";
        is >> dt.x;
        cout << "Nhap y: ";
        is >> dt.y;
        cout << "Nhap r: ";
        is >> dt.r;
        return is;
    }

    friend ostream& operator<<(ostream &os, CDuongTron &dt){
        os << "x: " << dt.x << '\n';
        os << "y: " << dt.y << '\n';
        os << "r: " << dt.r << '\n';
        return os;
    }

};

int main(){
    CDuongTron a;
    cin >> a;
    cout << a;
    return 0;
}