#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Tong2So(int a, int b);
int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	int kq=Tong2So(a,b);
	cout<<a<<" + "<<b<<" = "<<kq;
	return 0;
}
int Tong2So(int a, int b)
{
	return a+b;
}
