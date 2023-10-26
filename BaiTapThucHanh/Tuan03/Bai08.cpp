#include <iostream>

using namespace std;

class CDonThuc {
    private:
        float heSo;
        int soMu;
    public:
        CDonThuc();
        CDonThuc(float, int);
        CDonThuc(const CDonThuc&);
        ~CDonThuc();
};

CDonThuc::CDonThuc(){
    heSo = 0;
    soMu = 0;
}

CDonThuc::CDonThuc(float a, int b){
    heSo = a;
    soMu = b;
}

CDonThuc::CDonThuc(const CDonThuc& dt){
    heSo = dt.heSo;
    soMu = dt.soMu;
}

CDonThuc::~CDonThuc(){
    return;
}   

