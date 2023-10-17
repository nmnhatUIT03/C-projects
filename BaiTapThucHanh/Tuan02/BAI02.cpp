//Viết chương trình nhập tọa độ hai điểm trong không gian. Tính khoảng cách giữa chúng và xuất kết quả.
#include <iostream>
#include <math.h>
using namespace std;
class Diem{
    private:
        float x, y, z;
    public:
        void nhap();
        void xuat();
        float khoangCach(Diem);
};

void Diem::nhap(){
    cout << "Nhap toa do diem: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
}

void Diem::xuat(){
    cout << "A(" << x << ", " << y << ", " << z << ")" << endl;
}

float Diem::khoangCach(Diem B){
    return sqrt(pow(x - B.x, 2) + pow(y - B.y, 2) + pow(z - B.z, 2));
}
int main(){
    Diem A, B;
    A.nhap();
    B.nhap();
    cout << "Khoang cach giua hai diem A va B la: " << A.khoangCach(B) << endl;
    return 0;
}