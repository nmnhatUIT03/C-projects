#include <iostream>

using namespace std;

class NhanVien{
    protected:
        char HoTen;
        CNgaySinh NgaySinh;
        float luong;
        float lcb;
    public:
        virtual Nhap();
        virtual Tinhluong();
        virtual Xuat();
        virtual float LayLuong();
        virtual CNhanVien*TimKiem(char []);
};


class CSanXuat:public CNhanVien{
    private:
        int ssp;
    public:
        void Nhap();
        void Tinhluong();
        void Xuat();
        float LayLuong();
        CNhanVien*TimKiem(char []);
};

class CVanPhong:public CNhanVien{
    protected:
        int snlv;
        float trocap;
    public:
        void Nhap();
        void Tinhluong();
        void Xuat();
        float LayLuong();
        CNhanVien*TimKiem(char []);
};

class CQuanLy:public CVanPhong{
    private:
        float hscv;
        float thuong;
    public:
        void Nhap();
        void Tinhluong();
        void Xuat();
        float LayLuong();
        CNhanVien*TimKiem(char []);
};


class CongTy{
    private:
        CNhanVien *ds[100];
        int n
    public:
        void Nhap();
        void Tinhluong();
        void Xuat();
        float LayLuong();
        CNhanVien*TimKiem(char []);
};


float CNhanVien::LayLuong(){
    return luong;
}

float CSanXuat::LayLuong(){
    return luong;
}


float CQuanLy::LayLuong(){
    return luong;
}


float CVanPhong::LayLuong(){
    return luong;
}

CNhanVien*CSanXuat::TimKiem(char ht[]){
    if(strcmp(HoTen,ht)==0)
        return this;
    return NULL;
}

CNhanVien*CVanPhong::TimKiem(char ht[]){
    if(strcmp(HoTen,ht)==0)
        return this;
    return NULL;
}

CNhanVien*CVanPhong::TimKiem(char ht[]){
    if(strcmp(HoTen,ht)==0)
        return this;
    return NULL;
}

CNhanVien* CQuanLy::TimKiem(char ht[]){
    if(strcmp(HoTen,ht)==0)
        return this;
    return NULL;
}

CNhanViet* CongTy::TimKiem(char ht[]){
    for(int i=0;i<n;i++){
        CNhanVien *p=ds[i]->TimKiem(ht);
        if(p!=NULL)
            return p;
    }
    return NULL;
}


float CongTy::LayLuong(){
    float s=0;
    for(int i=0;i<n;i++)
        s+=ds[i]->LayLuong();
    return s;
}

void CNhanVien::Tinhluong(){
    return;
}

void CSanXuat::Tinhluong(){
    luong=lcb*ssp;
}

void CVanPhong::Tinhluong(){
    luong=lcb+snlv*100000+trocap;
}

void CQuanLy::Tinhluong(){
    luong=lcb*hscv+thuong;
}

void CongTy::Tinhluong(){
    for(int i=0;i<n;i++)
        ds[i]->Tinhluong();
}

/*Nhập thông tin của các nhân viên để phục vụ cho việc
tính lương.
▪ Thực hiện việc tính lương cho từng nhân viên.
▪ Xuất thông tin của các nhân viên.
▪ Tính tổng lương của công ty.
▪ Tìm kiếm một nhân viên theo họ tên.
*/

void CNhanVien::Nhap(){
    cout<<"Nhap ho ten: ";
    fflush(stdin);
    gets(HoTen);
    cout<<"Nhap ngay sinh: ";
    NgaySinh.Nhap();
    cout<<"Nhap luong co ban: ";
    cin>>lcb;
}


void CSanXuat::Nhap(){
    CNhanVien::Nhap();
    cout<<"Nhap so san pham: ";
    cin>>ssp;
}

void CVanPhong::Nhap(){
    CNhanVien::Nhap();
    cout<<"Nhap so ngay lam viec: ";
    cin>>snlv;
    cout<<"Nhap tro cap: ";
    cin>>trocap;
}

void CQuanLy::Nhap(){
    CVanPhong::Nhap();
    cout<<"Nhap he so chuc vu: ";
    cin>>hscv;
    cout<<"Nhap tien thuong: ";
    cin>>thuong;
}


void CNhanVien::Xuat(){
    cout<<"Ho ten: "<<HoTen<<endl;
    cout<<"Ngay sinh: ";
    NgaySinh.Xuat();
    cout<<"Luong: "<<luong<<endl;
}

void CSanXuat::Xuat(){
    CNhanVien::Xuat();
    cout<<"So san pham: "<<ssp<<endl;
}

void CVanPhong::Xuat(){
    CNhanVien::Xuat();
    cout<<"So ngay lam viec: "<<snlv<<endl;
    cout<<"Tro cap: "<<trocap<<endl;
}

void CQuanLy::Xuat(){
    CVanPhong::Xuat();
    cout<<"He so chuc vu: "<<hscv<<endl;
    cout<<"Tien thuong: "<<thuong<<endl;
}

void CongTy::Nhap(){
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin nhan vien thu "<<i+1<<endl;
        cout<<"1. Nhan vien san xuat"<<endl;
        cout<<"2. Nhan vien van phong"<<endl;
        cout<<"3. Nhan vien quan ly"<<endl;
        int chon;
        cout<<"Chon: ";
        cin>>chon;
        switch(chon){
            case 1: ds[i]=new CSanXuat;
                    break;
            case 2: ds[i]=new CVanPhong;
                    break;
            case 3: ds[i]=new CQuanLy;
                    break;
        }
        ds[i]->Nhap();
    }
}

void CongTy::Xuat(){
    for(int i=0;i<n;i++){
        cout<<"Thong tin nhan vien thu "<<i+1<<endl;
        ds[i]->Xuat();
    }
}

int main(){
    CongTy ct;
    ct.Nhap();
    ct.Tinhluong();
    ct.Xuat();
    cout<<"Tong luong cua cong ty: "<<ct.LayLuong()<<endl;
    char ht[30];
    cout<<"Nhap ho ten nhan vien can tim: ";
    fflush(stdin);
    gets(ht);
    CNhanVien *p=ct.TimKiem(ht);
    if(p==NULL)
        cout<<"Khong tim thay nhan vien"<<endl;
    else{
        cout<<"Thong tin nhan vien can tim"<<endl;
        p->Xuat();
    }
    return 0;
}