#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double x;
	int n;
	int mau=1;
	double s=0;
	cout<<"Nhap x: ";cin>>x;
	cout<<"Nhap n: ";cin>>n;
	for(int i=1; i<=n; i++)
	{
		double tu=pow(x,i);
		mau=mau*i;
		s=s+tu/mau;
	}
	cout<<"S = "<<s;
	return 0;
}
