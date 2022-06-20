#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	int sum=0;
	cout<<"Nhap n: ";cin>>n;
	do
	{
		int sd=n%10;
		n=n/10;
		sum=sum+sd;
	}
	while(n>0);
	cout<<"Tong cac chu so = "<<sum;
	return 0;
}
