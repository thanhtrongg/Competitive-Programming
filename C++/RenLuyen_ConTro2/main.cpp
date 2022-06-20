#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void NhapMang(int *&a, int n)
{
    srand(time(NULL));
    a=new int[n];
    for(int i=0;i<n;i++)
    {
        *(a+i)=rand()%101;
    }

}
void XuatMang(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<"\t";
    }
}
void Swap(int *&pa, int *&pb)
{
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
}
void SapGiamDan(int *&a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)<*(a+j))
            {
                int *a1=(a+i);
                int *a2=(a+j);
                Swap(a1,a2);

            }
        }
    }
}
int main(){
    int *a;
    int n=10;
    NhapMang(a,n);
    cout<<"Mang sau khi nhap la: \n";
    XuatMang(a,n);    
    SapGiamDan(a,n);
    cout<<"\nMang sau sap giam la: \n";
    XuatMang(a,n);
    return 0;
}
