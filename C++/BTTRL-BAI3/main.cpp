#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double Xa,Ya,Xb,Yb,AB;
	cout<<"Moi ban nhap toa do giao diem Xa = ";
	cin>>Xa;
	cout<<"Moi ban nhap toa do giao diem Ya= ";
	cin>>Ya;
	cout<<"Moi ban nhap toa do giao diem Xb= ";
	cin>>Xb;
	cout<<"Moi ban nhap toa do giao diem Yb= ";
	cin>>Yb;
	AB=sqrt(pow(Xb-Xa,2)+pow(Yb-Ya,2));
	cout<<"Do dai doan thang AB = "<<AB;
	return 0;
}
