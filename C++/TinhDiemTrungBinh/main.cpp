#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double diemtoan;
	double diemly;
	double diemvan;
	double dtb;
	cout<<"Moi ban nhap diem toan = ";
	cin>>diemtoan;
	cout<<"Moi ban nhap diem ly = ";
	cin>>diemly;
	cout<<"Moi ban nhap diem van = ";
	cin>>diemvan;
	dtb = (diemtoan + diemly + diemvan)/3;
	cout<<"Diem trung binh = "<<dtb<<endl;
	cout<<"DTB lam tron = "<<setprecision(3)<<dtb;
	return 0;
}
