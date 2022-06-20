#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	for(;;)
	{
		int somay=1+rand()%100;
		cout<<somay<<"\n";
		cout<<"**********GAME DOAN SO**********\n";
		cout<<"May da doan so tu [1..100], moi ban do so: ";
		bool iswin=false;
		int solandoan=0;
		for(;;)
		{
			int songuoi;
			cin>>songuoi;
			solandoan++;
			cout<<"Ban doan lan thu "<<solandoan<<"\n";
			if(songuoi==somay)
			{
				cout<<"Ban da doan dung, so may = "<<somay<<"\n";
				iswin=true;
				break;
			}
			else if(songuoi>somay)
			{
				cout<<"So cua ban lon hon so cua may"<<"\n";
			}
			else
			{
				cout<<"So cua ban nho hon so cua may"<<"\n";
			}
			if(solandoan==7)
			break;
		}
		if(iswin!=true)
		{
			cout<<"GAME OVER!";
			cout<<"\nSo cua may = "<<somay;
		}
		cout<<"\nChoi tiep khong?(c/k): ";
		char c;
		cin>>c;
		if(c=='k')
		{
		break;
		}
	}
	cout<<"GOOD BYE!";
	return 0;
}
