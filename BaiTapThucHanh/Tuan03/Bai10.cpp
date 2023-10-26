#include <iostream>

using namespace std;

class CDuongTron{
    private:
        float x;
        float y;
        float r;
    public:
        CDuongTron();
        CDuongTron(float, float, float);
        CDuongTron(const CDuongTron&);
        ~CDuongTron();
};

CDuongTron::CDuongTron(){
    x = 0;
    y = 0;
    r = 0;
}

CDuongTron::CDuongTron(float a, float b, float c){
    x = a;
    y = b;
    r = c;
}

CDuongTron::CDuongTron(const CDuongTron& dt){
    x = dt.x;
    y = dt.y;
    r = dt.r;
}

CDuongTron::~CDuongTron(){
    return;
}
