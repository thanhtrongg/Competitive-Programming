#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";cin>>n;
	double M[n];
	for(int i=0;i<n;i++)
	{
		cout<<"M ["<<i<<"] = ";
		cin>>M[i];
	}
	cout<<"Mang sau khi nhap: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(M[i]>M[j])
			{
				int t=M[i];
				M[i]=M[j];
				M[j]=t;
			}
		}
	}
	cout<<"\nMang sau khi sap xem theo thu tu giam dan: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	return 0;
}
