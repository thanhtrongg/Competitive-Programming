#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cout<<"Nhap so phan tu trong mang: ";cin>>n;
	int M[n];
	cout<<"Moi ban nhap cac gia tri trong phan tu: \n";
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]= ";
		cin>>M[i];
	}
	cout<<"Mang sau khi ban nhap: \n";
	for(int i=0;i<n;i++)
	{
	cout<<M[i]<<"\t";
	}
	cout<<"\nNhap so k: ";cin>>k;
	bool kq=false;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
		{
			kq=true;
			dem++;
			//break;
		}
	}
	if(kq==true)
	{
		cout<<"k co trong mang, k xuat hien "<<dem<<" lan";
	}
	else
	{
		cout<<"\nk khong co trong mang";
	}
	return 0;
}
