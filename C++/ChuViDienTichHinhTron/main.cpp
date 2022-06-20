#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TINH CHU VI - DIEN TICH HINH TRON"<<endl;
	double r;
	const double PI=3.14;
	double chuvi,dientich;
	cout<<"Moi ban nhap vao ban kinh = ";
	cin>>r;
	chuvi=2*PI*r;
	dientich=PI*r*r;
	cout<<"Chu vi = "<<chuvi<<endl;
	cout<<"Dien tich = "<<dientich<<endl;
	return 0;
}
