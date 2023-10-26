#include <iostream>

using namespace std;

class CNgay {
    private:
        int ngay;
        int thang;
        int nam;
    public:
        CNgay();
        CNgay(int, int, int);
        CNgay(const CNgay&);
        ~CNgay();
};

CNgay::CNgay(){
    ngay = 1;
    thang = 1;
    nam = 1;
}

CNgay::CNgay(int d, int m, int y){
    ngay = d;
    thang = m;
    nam = y;
}

CNgay::CNgay(const CNgay& n){
    ngay = n.ngay;
    thang = n.thang;
    nam = n.nam;
}

CNgay::~CNgay(){
    return;
}