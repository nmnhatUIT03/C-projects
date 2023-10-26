#include <iostream>

using namespace std;

class CTamGiac {
    private:
        float a;
        float b;
        float c;
    public:
        CTamGiac();
        CTamGiac(float, float, float);
        CTamGiac(const CTamGiac&);
        ~CTamGiac();
};

CTamGiac::CTamGiac(){
    a = 0;
    b = 0;
    c = 0;
}

CTamGiac::CTamGiac(float x, float y, float z){
    a = x;
    b = y;
    c = z;
}

CTamGiac::CTamGiac(const CTamGiac& tg){
    a = tg.a;
    b = tg.b;
    c = tg.c;
}

CTamGiac::~CTamGiac(){
    return;
}

