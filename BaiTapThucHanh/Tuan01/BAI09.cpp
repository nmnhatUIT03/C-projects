#include <iostream>
#include <math.h>

using namespace std;

struct toado {
    int x;
    int y;
};

struct diem {
    toado A;
    toado B;
    
};

void nhap(diem &d){
    cout << "Nhap x Tam: ";
    cin >> d.A.x;
    cout << "Nhap y Tam: ";
    cin >> d.A.y;
    cout << "Nhap x B: ";
    cin >> d.B.x;
    cout << "Nhap y B: ";
    cin >> d.B.y;
}

float bankinh(diem d){
    float r = sqrt(pow(d.A.x - d.B.x, 2) + pow(d.A.y - d.B.y, 2));
    return r;
}

int main(){
    diem d;
    nhap(d);
    bankinh(d);
    cout << "Chu vi: " << 2 * 3.14 * bankinh(d) << endl;
    cout << "Dien tich: " << 3.14 * pow(bankinh(d), 2) << endl;
    return 0;
}