#include <iostream>

using namespace std;

class CDonThuc{
private:
    float heSo;
    int soMu;
public:
    CDonThuc(){
        heSo = 0.0;
        soMu = 0;
    }
    friend istream& operator>>(istream &is, CDonThuc &dt){
        cout << "Nhap he so: ";
        is >> dt.heSo;
        cout << "Nhap so mu: ";
        is >> dt.soMu;
        return is;
    }

    friend ostream& operator<<(ostream &os, CDonThuc &dt){
        os << "He so: " << dt.heSo << '\n';
        os << "So mu: " << dt.soMu << '\n';
        return os;
    }

};

int main(){
    CDonThuc a;
    cin >> a;
    cout << a;
    return 0;
}