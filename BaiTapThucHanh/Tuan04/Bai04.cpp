#include <iostream>

using namespace std;

class CHonSo{
private:
    int nguyen;
    float thuc;
public:
    CHonSo(){
        nguyen = 0;
        thuc = 0.0;
    }
    friend istream& operator>>(istream &is, CHonSo &h){
        cout << "Nhap nguyen: ";
        is >> h.nguyen;
        cout << "Nhap thuc: ";
        is >> h.thuc;
        return is;
    }

    friend ostream& operator<<(ostream &os, CHonSo &h){
        os << "Nguyen: " << h.nguyen << '\n';
        os << "Thuc: " << h.thuc << '\n';
        return os;
    }

};

int main(){
    CHonSo a;
    cin >> a;
    cout << a;
    return 0;
}