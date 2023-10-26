#include <iostream>

using namespace std;

class SoPhuc{
    private:
        float thuc;
        float ao;
    public:
        SoPhuc();
        SoPhuc(float, float);
        SoPhuc(const SoPhuc&);
        ~SoPhuc();
};

SoPhuc::SoPhuc(){
    thuc = 0;
    ao = 0;
}

SoPhuc::SoPhuc(float a, float b){
    thuc = a;
    ao = b;
}

SoPhuc::SoPhuc(const SoPhuc& sp){
    thuc = sp.thuc;
    ao = sp.ao;
}

SoPhuc::~SoPhuc(){
    return;
}

