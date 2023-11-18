#include <iostream>

using namespace std;

class CPhanSo{
    private:
        int tu, mau;
    public:
        CPhanSo(){
            tu = 0;
            mau = 1;
        }
        friend istream& operator>>(istream &is, CPhanSo &p);

        friend ostream& operator<<(ostream &os, CPhanSo &p);
};