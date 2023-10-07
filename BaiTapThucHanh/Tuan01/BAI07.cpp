#include <iostream>

using namespace std;

struct date{
    int day;
    int month;
    int year;
};

void nhap(date &d){
    cout << "Nhap ngay: ";
    cin >> d.day;
    cout << "Nhap thang: ";
    cin >> d.month;
    cout << "Nhap nam: ";
    cin >> d.year;
}

void tinhngayhomqua(date &d){
        if (d.month == 3){
            if (d.year % 4 == 0 && d.year % 100 != 0){                
                    if (d.day == 1){
                        d.day = 29;
                        d.month--;
                    }
                    else{
                        d.day--;
                    }
                }else{
                    if (d.day == 1){
                        d.day = 28;
                        d.month--;
                    }
                    else{
                        d.day--;
                    }
                }
        }else if(d.day == 1 && d.month == 1){
            d.day = 31;
            d.month = 12;
            d.year--;
        }
        else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11){
            if (d.day == 1){
                d.day = 31;
                d.month--;
            }
            else{
                d.day--;
            }
        }
        else{
            if (d.day == 1){
                d.day = 31;
                d.month--;
            }
            else{
                d.day--;
            }
        }
    
    }
int main(){
    date d;
    nhap(d);
    tinhngayhomqua(d);
    cout << "Ngay tiep theo la: " << d.day << "/" << d.month << "/" << d.year << endl;
    return 0;
}