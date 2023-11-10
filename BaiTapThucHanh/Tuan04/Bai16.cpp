#include <iostream>

using namespace std;

class CMaTranDong{
private:
    int n, m;
    int **a;
public:
    CMaTranDong(){
        n = 0;
        m = 0;
        a = NULL;
    }
    friend istream& operator>>(istream &is, CMaTranDong &mt){
        cout << "Nhap n: ";
        is >> mt.n;
        cout << "Nhap m: ";
        is >> mt.m;
        mt.a = new int*[mt.n];
        for(int i = 0; i < mt.n; i++){
            mt.a[i] = new int[mt.m];
        }
        for(int i = 0; i < mt.n; i++){
            for(int j = 0; j < mt.m; j++){
                cout << "Nhap a[" << i << "][" << j << "]: ";
                is >> mt.a[i][j];
            }
        }
        return is;
    }

    friend ostream& operator<<(ostream &os, CMaTranDong &mt){
        os << "n: " << mt.n << '\n';
        os << "m: " << mt.m << '\n';
        for(int i = 0; i < mt.n; i++){
            for(int j = 0; j < mt.m; j++){
                os << "a[" << i << "][" << j << "]: " << mt.a[i][j] << '\n';
            }
        }
        return os;
    }

};

int main(){
    CMaTranDong a;
    cin >> a;
    cout << a;
    return 0;
}   

