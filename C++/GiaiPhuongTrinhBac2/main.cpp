#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c;
	cout<<"Chuong Trinh Tinh Phuong Trinh Bac 2: ax^2 + bx + c = 0\n";
	cout<<"Nhap so a: ";
	cin>>a;
	cout<<"Nhap so b: ";
	cin>>b;
	cout<<"Nhap so c: ";
	cin>>c;
	if(a==0)
	{
		if(b==0 && c==0)
		{
			cout<<"Phuong trinh vo so nghiem";
		}
		else if(b==0 && c!=0)
		{
			cout<<"Phuong trinh vo nghiem";
		}
		else
		{
			double x=-c/b;
			cout<<"Phuong trinh co 1 nghiem x = "<<x<<endl;
		}
	}
	else
{
	double delta=(b*b)-(4*a*c);
	if(delta<0)
	{
		cout<<"Phuong trinh vo nghiem\n";
	}
	else if(delta==0)
	{
		double nghiemkep=-b/(2*a);
		cout<<"Phuong trinh co nghiem kep x1 = x2 = "<<nghiemkep;
	}
	else
	{
		double x1=(-b+sqrt(delta))/(2*a);
		double x2=(-b-sqrt(delta))/(2*a);
		cout<<"Phuong trinh bac 2 co hai nghiem x1 , x2"<<endl;
		cout<<"x1 = "<<x1<<endl;
		cout<<"x2 = "<<x2;
	}
}
	return 0;
}
