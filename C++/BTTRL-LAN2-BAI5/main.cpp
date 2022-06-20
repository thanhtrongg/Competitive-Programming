#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TIM HE LUC PHAN\n";
	char n;
	cout<<"Moi ban nhap ky tu tu A -> F hoac 0 - 9: ";cin>>n;
	switch(n)
	{
		case '0':cout<<"He thap luc phan cua ky tu 0 la: 0";break;
		case '1':cout<<"He thap luc phan cua ky tu 1 la: 1";break;
		case '2':cout<<"He thap luc phan cua ky tu 2 la: 2";break;
		case '3':cout<<"He thap luc phan cua ky tu 3 la: 3";break;
		case '4':cout<<"He thap luc phan cua ky tu 4 la: 4";break;
		case '5':cout<<"He thap luc phan cua ky tu 5 la: 5";break;
		case '6':cout<<"He thap luc phan cua ky tu 6 la: 6";break;
		case '7':cout<<"He thap luc phan cua ky tu 7 la: 7";break;
		case '8':cout<<"He thap luc phan cua ky tu 8 la: 8";break;
		case '9':cout<<"He thap luc phan cua ky tu 9 la: 9";break;
		case 'A':cout<<"He thap luc phan cua ky tu A la: 10";break;
		case 'B':cout<<"He thap luc phan cua ky tu A la: 11";break;
		case 'C':cout<<"He thap luc phan cua ky tu A la: 12";break;
		case 'D':cout<<"He thap luc phan cua ky tu A la: 13";break;
		case 'E':cout<<"He thap luc phan cua ky tu A la: 14";break;
		case 'F':cout<<"He thap luc phan cua ky tu A la: 15";break;
		default:cout<<"He thap luc phan khong dung ky so nay";
	}
	return 0;
}
