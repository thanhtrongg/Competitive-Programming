#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu: ";cin>>n;
	int M[n];
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]= ";cin>>M[i];
	}
	cout<<"Mang sau khi nhap: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	cout<<"\nCac so le trong mang: \n";
	int demsole=0;
	for(int i=0;i<n;i++)
	{
		if(M[i] % 2 != 0)
		{
			cout<<M[i]<<"\t";
			demsole++;
		}
	}
	cout<<"\nCo tong cong "<<demsole<<" so le";
	cout<<"\nCac so chan trong mang: \n";
	int demsochan=0;
	for(int i=0;i<n;i++)
	{
		if(M[i] % 2 == 0)
		{
			cout<<M[i]<<"\t";
			demsochan++;
		}
	}
	cout<<"\nCo tong cong "<<demsochan<<" so chan";
	cout<<"\nCac so nguyen to trong mang: \n";
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=1;j<=n;j++)
		if(M[i]%j==0)
		{
			dem++;
		}
		if(dem==2)
		{
			cout<<M[i]<<"\t";
		}
	}
	return 0;
}
