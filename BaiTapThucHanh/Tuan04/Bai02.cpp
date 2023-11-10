//Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho các lớp đối tượng sau:Lớp điểm không gian (CDiemKhongGian).

#include <iostream>

using namespace std;

class CDiemKhongGian{
private:
    float x, y, z;
public:
    CDiemKhongGian(){
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    friend istream& operator>>(istream &is, CDiemKhongGian &d){
        cout << "Nhap x: ";
        is >> d.x;
        cout << "Nhap y: ";
        is >> d.y;
        cout << "Nhap z: ";
        is >> d.z;
        return is;
    }

    friend ostream& operator<<(ostream &os, CDiemKhongGian &d){
        os << "x: " << d.x << '\n';
        os << "y: " << d.y << '\n';
        os << "z: " << d.z << '\n';
        return os;
    }

};


int main(){
    CDiemKhongGian a;
    cin >> a;
    cout << a;
    return 0;
}
