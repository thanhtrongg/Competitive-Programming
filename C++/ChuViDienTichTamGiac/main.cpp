#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TINH CHU VI - DIEN TICH TAM GIAC";
	int canhdoidien;
	int chieucao;
	double dientich;
	cout<<"\nMoi ban nhap canh doi dien = ";
	cin>>canhdoidien;
	cout<<"Moi ban nhap chieu cao = ";
	cin>>chieucao;
	dientich=1.0/2*chieucao*canhdoidien;
	cout<<"Dien tich = "<<dientich;
	return 0;
}
