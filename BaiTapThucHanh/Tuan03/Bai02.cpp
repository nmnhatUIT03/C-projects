#include <iostream>

using namespace std;

class CDiemKhongGian{
    private:
        float x;
        float y;
        float z;
    public:
        CDiemKhongGian();
        CDiemKhongGian(float, float, float);
        CDiemKhongGian(const CDiemKhongGian&);
        ~CDiemKhongGian();
        
};

CDiemKhongGian::CDiemKhongGian(){
    x = 0;
    y = 0;
    z = 0;
}

CDiemKhongGian::CDiemKhongGian(float a, float b, float c){
    x = a;
    y = b;
    z = c;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& d){
    x = d.x;
    y = d.y;
    z = d.z;
}

CDiemKhongGian::~CDiemKhongGian(){
    return;
}