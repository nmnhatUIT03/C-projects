#include <bits/stdc++.h>
using namespace std;


class SinhVien{
    protected:
        int MSSV;
        string HoTen;
        string Diachi;
        int Tinchi;
        float DiemTB;
    public:
        void nhap(){
            std::cout << "Nhap MSSV: ";
            std::cin >> MSSV;
            std::cin.ignore();
            std::cout << "Nhap HoTen: ";
            std::getline(std::cin, HoTen);
            std::cout << "Nhap Dia chi: ";
            std::getline(std::cin, Diachi);
            std::cout << "Nhap Tin chi: ";
            std::cin >> Tinchi;
            std::cout << "Nhap Diem TB: ";
            std::cin >> DiemTB;
        }
       
        void xuat(){
            std::cout << "MSSV: " << MSSV << std::endl;
            std::cout << "HoTen: " << HoTen << std::endl;
            std::cout << "Dia chi: " << Diachi << std::endl;
            std::cout << "Tin chi: " << Tinchi << std::endl;
            std::cout << "Diem TB: " << DiemTB << std::endl;
        }
};

class SVCaoDang: public SinhVien{
    private:
        int DiemTN;
    public:
        void nhap(){
            SinhVien::nhap();
            std::cout << "Nhap Diem TN: ";
            std::cin >> DiemTN;
        }
        void xuat(){
            SinhVien::xuat();
            std::cout << "Diem TN: " << DiemTN << std::endl;
        }
        bool xetTN(){
            if(DiemTN >= 5 && DiemTB >= 5 && Tinchi >= 120){
                
                cout << "Tốt Nghiệp" << endl;
                return true;
            }
            
            cout << "Chưa Tốt Nghiệp" << endl;
            return false;
        
        }
        
};


class SVDaiHoc: public SinhVien{
    private:
        string TenLV;
        int DiemLV;
    public:
        void nhap(){
            SinhVien::nhap();
            std::cout << "Nhap Ten LV: ";
            std::cin >> TenLV;
            std::cout << "Nhap Diem LV: ";
            std::cin >> DiemLV;
        }
        void xuat(){
            SinhVien::xuat();
            std::cout << "Ten LV: " << TenLV << std::endl;
            std::cout << "Diem LV: " << DiemLV << std::endl;
        }
        bool xetTN(){
            if(DiemLV >= 5 && DiemTB >= 5 && Tinchi >= 170){
                
                cout << "Tốt Nghiệp" << endl;
                return true;
            }
            
            cout << "Chưa Tốt Nghiệp" << endl;
            return false;
        }
        
};
  



int main(){
    SVCaoDang svCD;
    SVDaiHoc svDH;
    svDH.nhap();
    svCD.nhap();
    svDH.xuat();
    svDH.xetTN();
    svCD.xuat();
    svCD.xetTN();
    return 0;
}

