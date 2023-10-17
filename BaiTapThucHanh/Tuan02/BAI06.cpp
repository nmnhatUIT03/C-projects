//Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.
#include <iostream>
using namespace std;

class Date{
    private:
        int ngay, thang, nam;
    public:
        void nhap();
        void xuat();
        Date ngayKeTiep();
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

Date Date::ngayKeTiep(){
    Date kq;
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
        if (thang == 2){
            if (ngay == 29){
                kq.ngay = 1;
                kq.thang = thang + 1;
                kq.nam = nam;
            }else{
                kq.ngay = ngay + 1;
                kq.thang = thang;
                kq.nam = nam;
            }
        }else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
            if (ngay == 30){
                kq.ngay = 1;
                kq.thang = thang + 1;
                kq.nam = nam;
            }else{
                kq.ngay = ngay + 1;
                kq.thang = thang;
                kq.nam = nam;
            }
        }else{
            if (ngay == 31){
                if (thang == 12){
                    kq.ngay = 1;
                    kq.thang = 1;
                    kq.nam = nam + 1;
                }else{
                    kq.ngay = 1;
                    kq.thang = thang + 1;
                    kq.nam = nam;
                }
            }else{
                kq.ngay = ngay + 1;
                kq.thang = thang;
                kq.nam = nam;
            }
        }
    }else{
    if (thang == 2){
        if (ngay == 28){
            kq.ngay = 1;
            kq.thang = thang + 1;
            kq.nam = nam;
        }else{
            kq.ngay = ngay + 1;
            kq.thang = thang;
            kq.nam = nam;
        }
    }else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
        if (ngay == 30){
            kq.ngay = 1;
            kq.thang = thang + 1;
            kq.nam = nam;
        }else{
            kq.ngay = ngay + 1;
            kq.thang = thang;
            kq.nam = nam;
        }
    }else{
        if (ngay == 31){
            if (thang == 12){
                kq.ngay = 1;
                kq.thang = 1;
                kq.nam = nam + 1;
            }else{
                kq.ngay = 1;
                kq.thang = thang + 1;
                kq.nam = nam;
            }
        }else{
            kq.ngay = ngay + 1;
            kq.thang = thang;
            kq.nam = nam;
        }
    }
    return kq;
    }
}

int main(){
    Date d1, d2;
    d1.nhap();
    d2 = d1.ngayKeTiep();
    cout << "Ngay ke tiep la: ";
    d2.xuat();
    return 0;
}