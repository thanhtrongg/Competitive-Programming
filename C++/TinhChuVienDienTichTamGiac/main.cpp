#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Nhap chieu dai canh a: ";cin>>a;
	cout<<"Nhap chieu dai canh b: ";cin>>b;
	cout<<"Nhap chieu dai canh c: ";cin>>c;
	if(a <= 0 || b <=  0 || c <= 0 || (a+b<c) || (a+c<b) || (b+c<a) )
	{
		cout<<"Khong tao thanh tam giac"<<endl;
	}
	else
	{
		int cv=a+b+c;
		double p=cv/2.0;
		double dt=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"Chu vi hinh tam giac la: "<<cv<<endl;
		cout<<"Nua chu vi hinh tam giac la: "<<p<<endl;
		cout<<"Dien tich hinh tam giac la: "<<dt<<endl;
	}
	
	return 0;
}
