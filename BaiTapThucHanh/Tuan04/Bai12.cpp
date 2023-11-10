#include <iostream>

using namespace std;

class CHinhCau{
private:
    float x, y, z, r;
public:
    CHinhCau(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
        r = 0.0;
    }
    friend istream& operator>>(istream &is, CHinhCau &hc){
        cout << "Nhap x: ";
        is >> hc.x;
        cout << "Nhap y: ";
        is >> hc.y;
        cout << "Nhap z: ";
        is >> hc.z;
        cout << "Nhap r: ";
        is >> hc.r;
        return is;
    }

    friend ostream& operator<<(ostream &os, CHinhCau &hc){
        os << "x: " << hc.x << '\n';
        os << "y: " << hc.y << '\n';
        os << "z: " << hc.z << '\n';
        os << "r: " << hc.r << '\n';
        return os;
    }

};

int main(){
    CHinhCau a;
    cin >> a;
    cout << a;
    return 0;
}

