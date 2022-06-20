#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double toan,van,dtb;
	cout<<"Nhap diem toan = ";
	cin>>toan;
	cout<<"Nhap diem van = ";
	cin>>van;
	dtb=(toan+van)/2;
	cout<<"Diem trung binh = "<<dtb;
	return 0;
}
