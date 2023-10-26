#include <iostream>

using namespace std;

class CThoiGian {
    private:
        int gio;
        int phut;
        int giay;
    public:
        CThoiGian();
        CThoiGian(int, int, int);
        CThoiGian(const CThoiGian&);
        ~CThoiGian();
};

CThoiGian::CThoiGian(){
    gio = 0;
    phut = 0;
    giay = 0;
}

CThoiGian::CThoiGian(int h, int m, int s){
    gio = h;
    phut = m;
    giay = s;
}

CThoiGian::CThoiGian(const CThoiGian& t){
    gio = t.gio;
    phut = t.phut;
    giay = t.giay;
}

CThoiGian::~CThoiGian(){
    return;
}   

