#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int thang;
	cout<<"Moi ban nhap thang: ";cin>>thang;
	if(thang < 1 || thang > 12)
	{
		cout<<"Thang khong hop le";
	}
	else if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12)
	{
		cout<<"Thang "<<thang<<" co 31 ngay";
	}
	else if(thang==2)
	{
		int nam;
		cout<<"Moi ban nhap nam:  ";cin>>nam;
		if(nam % 4 == 0 || nam % 400 == 0)
		{
			cout<<"Thang 2 co 29 ngay";
		}
		else
		{
			cout<<"Thang 2 co 28 ngay";
		}
	}
	else if(thang==4 || thang==6 || thang==9 || thang==11)
	{
		cout<<"Thang "<<thang<<" co 30 ngay";
	}
	return 0;
}
