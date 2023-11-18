//Hãy khai báo và định nghĩa hàm toán tử vào (toán tử nhập) và hàm toán tử ra (toán tử xuất) cho các lớp đối tượng sau: 1. Lớp điểm (CDiem).

#include <iostream>

using namespace std;

class CDiem{
    private:
        float toan, van, anh;
    public:
        CDiem(){
            toan = 0.0;
            van = 0.0;
            anh = 0.0;
        }
        friend istream& operator>>(istream &is, CDiem &d);
        friend ostream& operator<<(ostream &os, CDiem &d);

};
istream& operator>>(istream &is, CDiem &d){
            cout << "Nhap diem toan: ";
            is >> d.toan;
            cout << "Nhap diem anh: ";
            is >> d.anh;
            cout << "Nhap diem van";
            is >> d.van;
            return is;
        }

ostream& operator<<(ostream &os, CDiem &d){
            os << "Điểm anh: " << d.anh << '\n';
            os << "Điểm toán: " << d.toan << '\n';
            os << "Điểm văn: " << d.van << '\n';
            return os;
        }
int main(){
    CDiem a;
    cin >> a;
    cout << a;
    return 0;
}
