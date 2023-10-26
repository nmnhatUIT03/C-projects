//Hãy khai báo và định nghĩa các phương thức thiết lập cơ bản và phương thức phá hủy cho các lớp đối tượng sau: 1. Lớp điểm (CDiem).

#include <bits/stdc++.h>
using namespace std;

class CDiem {
    private:
        float hoanhdo;
        float tungdo;
    public:
        CDiem();
        CDiem(float, float);    
        CDiem(const CDiem&);
        ~CDiem();
};

CDiem::CDiem(){
    hoanhdo = 0;
    tungdo = 0;
}

CDiem::CDiem(const CDiem& d){
    hoanhdo = d.hoanhdo;
    tungdo = d.tungdo;
}

CDiem::CDiem(float x, float y){
    hoanhdo = x;
    tungdo = y;
}

CDiem::~CDiem(){
    return;
}