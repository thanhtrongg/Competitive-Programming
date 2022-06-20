#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c;
	cout<<"Moi ban nhap so a: ";cin>>a;
	cout<<"Moi ban nhap so b: ";cin>>b;
	cout<<"Moi ban nhap so c: ";cin>>c;
	if(a > b && a > c )
	{
		cout<<"So lon nhat la a: "<<a;
	}
	else if(a < b && a > c)
	{
		cout<<"So lon nhat la: "<<b;
	}
	else if(a > b || a == b && a < c)
	{
		cout<<"So lon nhat la: "<<c;
	}
	else if(a < b && b < c)
	{
		cout<<"So lon nhat la: "<<c;
	}
	else if(a < b && b == c)
	{
		cout<<"So lon nhat la: "<<b;
	}
	return 0;
}
