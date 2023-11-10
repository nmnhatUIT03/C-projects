//lớp mảng một chiều tĩnh
#include <iostream>

using namespace std;

class CMangTinh{
private:
    int *a;
    int n;
public:
    CMangTinh(){
        n = 0;
        a = NULL;
    }
    friend istream& operator>>(istream &is, CMangTinh &m){
        cout << "Nhap n: ";
        is >> m.n;
        m.a = new int[m.n];
        for(int i = 0; i < m.n; i++){
            cout << "Nhap a[" << i << "]: ";
            is >> m.a[i];
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, CMangTinh &m){
        os << "n: " << m.n << '\n';
        for(int i = 0; i < m.n; i++){
            os << "a[" << i << "]: " << m.a[i] << '\n';
        }
        return os;
    }

};

int main(){
    CMangTinh a;
    cin >> a;
    cout << a;
    return 0;
}