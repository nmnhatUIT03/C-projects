//nhap 2 so phuc
//tinh tong, hieu, tich, thuong
#include <iostream>

using namespace std;

struct SoPhuc{
    int thuc;
    int ao;
};

void nhap(SoPhuc &sp){
    cout << "Nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp.ao;
}

int main(){
    SoPhuc sp1, sp2;
    nhap(sp1);
    nhap(sp2);
    int sumThuc = sp1.thuc + sp2.thuc;
    int sumAo = sp1.ao + sp2.ao;
    cout << "Tong hai so phuc la: " << sumThuc << " + " << sumAo << "i" << endl;
    int difThuc = sp1.thuc - sp2.thuc;
    int difAo = sp1.ao - sp2.ao;
    cout << "Hieu hai so phuc la: " << difThuc << " + " << difAo << "i" << endl;
    int mulThuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
    int mulAo = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
    cout << "Tich hai so phuc la: " << mulThuc << " + " << mulAo << "i" << endl;
    int divThuc = (sp1.thuc * sp2.thuc + sp1.ao * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    int divAo = (sp1.ao * sp2.thuc - sp1.thuc * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    cout << "Thuong hai so phuc la: " << divThuc << " + " << divAo << "i" << endl;
    return 0;
}