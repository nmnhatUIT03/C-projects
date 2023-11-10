#include <iostream>

using namespace std;

class CSoPhuc{
private:
    float thuc, ao;
public:
    CSoPhuc(){
        thuc = 0.0;
        ao = 0.0;
    }
    friend istream& operator>>(istream &is, CSoPhuc &sp){
        cout << "Nhap phan thuc: ";
        is >> sp.thuc;
        cout << "Nhap phan ao: ";
        is >> sp.ao;
        return is;
    }

    friend ostream& operator<<(ostream &os, CSoPhuc &sp){
        os << "Phan thuc: " << sp.thuc << '\n';
        os << "Phan ao: " << sp.ao << '\n';
        return os;
    }

};

int main(){
    CSoPhuc a;
    cin >> a;
    cout << a;
    return 0;
}