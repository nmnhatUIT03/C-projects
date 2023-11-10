#include <iostream>

using namespace std;

class CDaThucDong{
private:
    int n;
    float *a;
public:
    CDaThucDong(){
        n = 0;
        a = NULL;
    }
    friend istream& operator>>(istream &is, CDaThucDong &dt){
        cout << "Nhap bac da thuc: ";
        is >> dt.n;
        dt.a = new float[dt.n + 1];
        for(int i = 0; i <= dt.n; i++){
            cout << "Nhap he so cua x^" << i << ": ";
            is >> dt.a[i];
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, CDaThucDong &dt){
        for(int i = 0; i <= dt.n; i++){
            os << dt.a[i] << "x^" << i;
            if(i != dt.n){
                os << " + ";
            }
        }
        os << '\n';
        return os;
    }

};

int main(){
    CDaThucDong a;
    cin >> a;
    cout << a;
    return 0;
}