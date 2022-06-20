#include <bits/stdc++.h>
using namespace std;
int KiemTraSoNguyenTo(int n){
   if(n<2)
    {
        return false;
    }
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0){
           return false;
        }
    } 
    return true;
}
int main(){
    int n;
    cout<<"Nhap n: ";cin>>n;
    if(KiemTraSoNguyenTo(n))
    {
        cout<<n<<" la so nguyen to";
    }
    else{
        cout<<n<<" khong phai la so nguyen to";
    }
}