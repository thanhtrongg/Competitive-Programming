#include <bits/stdc++.h>
using namespace std;
struct DiaChi{
    char SoNha[25];
    char TenDuong[255];
    char Quan[25];
    char TinhThanh[25];
};
struct SinhVien{
    char MaSV[10];
    char TenSV[255];
    bool GioiTinh;
    DiaChi DiaChiNha;
    DiaChi DiaChiTruong;
}teo,ty;
int main(){
    strcpy(teo.TenSV,"Nguyen Van Teo");
    teo.GioiTinh=false;
    strcpy(teo.MaSV,"SV113");
    cout<<"-------------------------------------\n";
    cout<<"Ma = "<<teo.MaSV<<endl;
    cout<<"Ten = "<<teo.TenSV<<endl;
    cout<<"Gioi Tinh = "<<(teo.GioiTinh==true?"Nu":"Nam")<<endl;
    cout<<"\n-------------------------------------\n";

    SinhVien bin;
    strcpy(bin.TenSV,"Tran Thanh Trong");
    cout<<"Ten cua Trong: "<<bin.TenSV;
}