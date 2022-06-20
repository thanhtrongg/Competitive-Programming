#include <bits/stdc++.h>
using namespace std;
int *CapPhatBoNho(int n){
    int *pM=new int[n];
    return pM;
}
void NhapMang(int *&pM,int n){
    for(int i=0;i<n;i++){
        cout<<"Nhap phan tu thu "<<i<<": ";
        cin>>*(pM+i);
    }
}
void XuatMang(int *pM,int n){
    for(int i=0;i<n;i++){
        cout<<*(pM+i)<<"\t";
    }
}
void SapGiam(int *&pM,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=*(pM+i);
            int b=*(pM+j);
            if(a<b){
                int temp=*(pM+i);
                *(pM+i)=*(pM+j);
                *(pM+j)=temp;
            }
        }
    }
}
int *DanhSachMax(int *pM,int n){
    int m=n>3?3:n;
    int *pX=CapPhatBoNho(m);
    SapGiam(pM,n);
    for(int i=0;i<n;i++){
        *(pX+i)=*(pM+i);
    }
    return pX;
}
int main(){
    int *pM=CapPhatBoNho(5);
    NhapMang(pM,5);
    cout<<"Du lieu sao khi nhap: \n";
    XuatMang(pM,5);
    int *pX=DanhSachMax(pM,5);
    cout<<"\n3 phan tu lon nhat: \n";
    XuatMang(pX,3);
}