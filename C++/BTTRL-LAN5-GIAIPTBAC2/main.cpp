#include <iostream>
#include <math.h>
using namespace std;
void ptb2(int a, int b, int c)
{
	if(a==0)
	{//bx+c=0
		if(b==0 && c==0)
			cout<<"Phuong trinh vo so nghiem";
		else if(b==0 && c!=0)
			cout<<"Phuong trinh vo nghiem";
		else
		{
			//bx=-c==>c=-c/b
			double x=-c*1.0/b;
			cout<<"Phuong trinh co 1 nghiem x = "<<x<<endl;
		}
	}	
	else
	{
		double delta=pow(b,2)-4*a*c;
		if(delta<0)
		{
			cout<<"Phuong trinh vo nghiem";
		}
		else if(delta==0)
		{
			double x=-b/(2*a);
			cout<<"Phuong trinh co nghiem kep x1=x2="<<x<<endl;
		}
		else
		{
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"Phuong trinh co 2 nghiem phan biet: "<<endl;
			cout<<"x1 = "<<x1<<endl;
			cout<<"x2 = "<<x2;
		}
	}
}
int main(){
	ptb2(5,7,-12);
    return 0;
}
