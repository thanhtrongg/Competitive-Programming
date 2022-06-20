#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,n;
	cout<<"Nhap so phan tu m : ";cin>>m;
	cout<<"Nhap so phan tu n: ";cin>>n;
	int M[m];
	for(int i=0;i<m;i++)
	{
		cout<<"M["<<i<<"]= ";cin>>M[i];
	}
	int N[n];
	for(int j=0;j<n;j++)
	{
		cout<<"N["<<j<<"]= ";cin>>M[j];
	}
	cout<<"Mang ban nhap la: \n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<M[i]<<"\t";
			cout<<N[j]<<"\t";
		}
	}
	return 0;
}
