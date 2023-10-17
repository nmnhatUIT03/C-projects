//Viết chương trình nhập vào một ngày. Tìm ngày hôm qua và xuất kết quả. 

#include <iostream>
using namespace std;

class Date{
    private:
        int ngay, thang, nam;
    public:
        void nhap();
        void xuat();
        Date ngayHomQua();
};

void Date::nhap(){
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
}

void Date::xuat(){
    cout << ngay << "/" << thang << "/" << nam << endl;
}

Date Date::ngayHomQua(){
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
        if (thang == 3){
            if (ngay == 1){
                ngay = 29;
                thang = 2;
                nam = nam;
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }else if (thang == 5 || thang == 7 || thang == 10 || thang == 12){
            if (ngay == 1){
                ngay = 30;
                thang = thang - 1;
                nam = nam;
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }else{
            if (ngay == 1){
                if (thang == 1){
                    ngay = 31;
                    thang = 12;
                    nam = nam - 1;
                }else{
                    ngay = 31;
                    thang = thang - 1;
                    nam = nam;
                }
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }
    }else{
        if (thang == 3){
            if (ngay == 1){
                ngay = 28;
                thang = 2;
                nam = nam;
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }else if (thang == 5 || thang == 7 || thang == 10 || thang == 12){
            if (ngay == 1){
                ngay = 30;
                thang = thang - 1;
                nam = nam;
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }else{
            if (ngay == 1){
                if (thang == 1){
                    ngay = 31;
                    thang = 12;
                    nam = nam - 1;
                }else{
                    ngay = 31;
                    thang = thang - 1;
                    nam = nam;
                }
            }else{
                ngay = ngay - 1;
                thang = thang;
                nam = nam;
            }
        }
    }
    return *this;
}
int main(){
    Date a;
    a.nhap();
    cout << "Ngay hom qua la: ";
    a.ngayHomQua();
    a.xuat();
    return 0;
}