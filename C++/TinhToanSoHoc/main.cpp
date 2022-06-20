#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	char ch;
	cout<<"Moi ban nhap so a: ";cin>>a;
	cout<<"Moi ban nhap so b: ";cin>>b;
	cout<<"Moi ban nhap phep tinh (+ - * /): ";cin>>ch;
	(int)ch;
	switch((int)ch)
	{
		case 43: 
			{
				int x1=a+b;
				cout<<a<<" + "<<b<<" = "<<x1<<endl;
				break;
			}
		case 45:
			{
				int x2=a-b;
				cout<<a<<" - "<<b<<" = "<<x2<<endl;
				break;
			}
		case 42:
			{
				int x3=a*b;
				cout<<a<<" * "<<b<<" = "<<x3<<endl;
				break;
			}
		case 47:
			if(b==0)
			{
				cout<<"Mau phai khac 0";
				break;
			}
			else
			{
				double x4=a*1.0/b;
				cout<<a<<" / "<<b<<" = "<<x4<<endl;
				break;
			}	
	}
	return 0;
}
