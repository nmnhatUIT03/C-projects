#include <iostream>

using namespace std;

class CNgayThangNam{
private:
    int ngay, thang, nam;
public:
    CNgayThangNam(){
        ngay = 0;
        thang = 0;
        nam = 0;
    }
    friend istream& operator>>(istream &is, CNgayThangNam &ntn){
        cout << "Nhap ngay: ";
        is >> ntn.ngay;
        cout << "Nhap thang: ";
        is >> ntn.thang;
        cout << "Nhap nam: ";
        is >> ntn.nam;
        return is;
    }

    friend ostream& operator<<(ostream &os, CNgayThangNam &ntn){
        os << "Ngay: " << ntn.ngay << '\n';
        os << "Thang: " << ntn.thang << '\n';
        os << "Nam: " << ntn.nam << '\n';
        return os;
    }

};


int main(){
    CNgayThangNam a;
    cin >> a;
    cout << a;
    return 0;
}