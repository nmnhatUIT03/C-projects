#include <iostream>

using namespace std;

class CHinhCau {
    private:
        float x;
        float y;
        float z;
        float banKinh;
    public:
        CHinhCau();
        CHinhCau(float);
        CHinhCau(const CHinhCau&);
        ~CHinhCau();
};


CHinhCau::CHinhCau(){
    x = 0;
    y = 0;
    z = 0;
    banKinh = 0;
}

CHinhCau::CHinhCau(float r){
    x = 0;
    y = 0;
    z = 0;
    banKinh = r;
}

CHinhCau::CHinhCau(const CHinhCau& hc){
    x = hc.x;
    y = hc.y;
    z = hc.z;
    banKinh = hc.banKinh;
}

CHinhCau::~CHinhCau(){
    return;
}