#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int ngay,thang,nam;
	cout<<"Moi ban nhap ngay: ";cin>>ngay;
	cout<<"Moi ban nhap thang: ";cin>>thang;
	cout<<"Moi ban nhap nam: ";cin>>nam;
	if(thang==2)
	{
		if(ngay<1 || ngay>29)
		{
			cout<<"Ngay khong hop le";
			exit(0);
		}
		
		if(nam / 4 != 0 || nam / 400 != 0)
		{
			switch(ngay)
			{
				case 28:cout<<"Ngay 1 thang 3 nam "<<nam;
				break;
			}
			else(ngay>=1||ngay<28)
			{
				int ngay1=ngay+1;
				cout<<"Ngay "<<ngay1<<" thang 2 "<<"nam "<<nam;
				exit(0);
			}
		}
		
		if(nam / 4 == 0 || nam / 400 == 0)
		{
			switch(ngay)
			{
				case 29:cout<<"Ngay 1 thang 3 nam "<<nam;
				break;
			}
		}
		else if(ngay>=1 || ngay<29);
		{
			int ngay2=ngay+1;
			cout<<"Ngay "<<ngay2<<" thang 2 "<<"nam "<<nam;
			exit(0);
		}
	}
	return 0;
}
