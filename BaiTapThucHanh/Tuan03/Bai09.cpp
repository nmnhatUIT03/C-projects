#include <iostream>

using namespace std;

class CDuongThang {
    private:
        float a;
        float b;
        float c;
    public:
        CDuongThang();
        CDuongThang(float, float, float);
        CDuongThang(const CDuongThang&);
        ~CDuongThang();
};

CDuongThang::CDuongThang(){
    a = 0;
    b = 0;
    c = 0;
}

CDuongThang::CDuongThang(float x, float y, float z){
    a = x;
    b = y;
    c = z;
}

CDuongThang::CDuongThang(const CDuongThang& dt){
    a = dt.a;
    b = dt.b;
    c = dt.c;
}

CDuongThang::~CDuongThang(){
    return;
}

