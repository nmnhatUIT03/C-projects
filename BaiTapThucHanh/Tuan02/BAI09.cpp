//Viết chương trình nhập tọa độ tâm và bán kính của một đường tròn. Tính diện tích và chu vi đường tròn.

#include <iostream>
using namespace std;

class Tam{
    private:
        float x, y;
    public:
        void nhap();
        void xuat();
        float getX();
        float getY();
        float BanKinh();
        float ChuVi();
        float Dientich();
};

void Tam::nhap(){
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void Tam::xuat(){
    cout << "(" << x << ", " << y << ")";
}

float Tam::getX(){
    return x;
}

float Tam::getY(){
    return y;
}

float Tam::BanKinh(){
    float r;
    cout << "Nhap ban kinh: ";
    cin >> r;
    return r;
}

float Tam::ChuVi(){
    float r = BanKinh();
    return 2 * 3.14 * r;
}

float Tam::Dientich(){
    float r = BanKinh();
    return 3.14 * r * r;
}

int main(){
    Tam A;
    A.nhap();
    cout << "Tam: ";
    A.xuat();
    cout << endl;
    cout << "Chu vi: " << A.ChuVi() << endl;
    cout << "Dien tich: " << A.Dientich() << endl;
    return 0;
}
//Mà em không hiểu, khi đã yêu cầu nhập r rồi thì mình đâu cần phải nhập tọa độ để tính diện tích hay chu vi đúng không ạ?