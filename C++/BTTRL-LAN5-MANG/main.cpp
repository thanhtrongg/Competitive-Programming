#include <iostream>
using namespace std;
void NhapMang(int M[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}
void XuatMang(int M[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
}
int TimK(int M[],int n,int k){
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
			return i;
	}
	return 1;
}
void SapXepTangDan(int M[],int n){
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(M[i]>M[j])
			{
				int t=M[i];
				M[i]=M[j];
				M[j]=t;
			}
		}
	}
}
int main() {
	int n;
	cout<<"Nhap n: ";cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap: \n";
	XuatMang(M,n);
	int k;
	cout<<"\nNhap k de tim: ";cin>>k;
	int kqTim=TimK(M,n,k);
	if(kqTim==1)
		cout<<"Khong thay "<<k<<" trong mang\n";
	else
		cout<<"Tim thay "<<k<<" tai vi tru thu "<<kqTim<<" trong mang\n";
	cout<<"Mang sau khi sap xep: \n";
	SapXepTangDan(M,n);
	XuatMang(M,n);
	return 0;
}
