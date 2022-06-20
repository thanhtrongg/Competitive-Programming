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
	cout<<"Mang ban nhap la: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	cout<<"\nMang nguoc lai la: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int t;
			if(M[i]<M[j])
			{
				t=M[i];
				M[i]=M[j];
				M[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	return 0;
}
