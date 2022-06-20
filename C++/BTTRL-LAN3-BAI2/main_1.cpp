#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	cout<<"Nhap n: ";cin>>n;
	for(;n>0;)
	{
		int sd=n%10;
		n=n/10;
		sum=sum+sd;
	}
	cout<<"Tong = "<<sum;
	return 0;
}
