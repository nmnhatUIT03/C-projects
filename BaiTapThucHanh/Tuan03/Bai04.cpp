#include <iostream>

using namespace std;

class CHonSo{
    private:
        int tu;
        int mau;
        int nguyen;
    public:
        CHonSo();
        CHonSo(int, int);
        CHonSo(const CHonSo&);
        ~CHonSo();
};

CHonSo::CHonSo(){
    tu = 0;
    mau = 1;
    nguyen = 0;
}

CHonSo::CHonSo(int t, int m){
    tu = t;
    mau = m;
    nguyen = 0;
}

CHonSo::CHonSo(const CHonSo& hs){
    tu = hs.tu;
    mau = hs.mau;
    nguyen = hs.nguyen;
}

CHonSo::~CHonSo(){
    return;
}