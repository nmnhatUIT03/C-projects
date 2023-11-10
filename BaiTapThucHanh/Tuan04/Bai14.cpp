#include <iostream>

using namespace std;

class CMangDong{
private:
    int n;
    int *a;
public:
    CMangDong(){
        n = 0;
        a = NULL;
    }
    friend istream& operator>>(istream &is, CMangDong &md){
        cout << "Nhap n: ";
        is >> md.n;
        md.a = new int[md.n];
        for(int i = 0; i < md.n; i++){
            cout << "Nhap a[" << i << "]: ";
            is >> md.a[i];
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, CMangDong &md){
        os << "n: " << md.n << '\n';
        for(int i = 0; i < md.n; i++){
            os << "a[" << i << "]: " << md.a[i] << '\n';
        }
        return os;
    }

};

int main(){
    CMangDong a;
    cin >> a;
    cout << a;
    return 0;
}