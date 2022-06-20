#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";cin>>n;
	if(n<2)
	{
		cout<<n<<" khong phai la so nguyen to";
	}
	int kq=0;
	for(int i=2;i<n+1;i++)
	{
		for(int j=2;j<n-1;j++)
		{	
			if(i%j==0)
			{
				kq++;
			}
		}
	}
	if(kq==0)
	{
		cout<<n<<" la so nguyen to";
	}
	else
	{
		cout<<n<<" khong phai la so nguyen to";
	}
	return 0;
}
