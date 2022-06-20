#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien
{
	int ma;
	char ten[255];	
};
void NhapMang(SinhVien dsSV[],int siso);
void XuatMang(SinhVien dsSV[],int siso);
int main(int argc, char** argv) {
	int siso=3;
	SinhVien dsSV[siso];
	NhapMang(dsSV,siso);
	XuatMang(dsSV,siso);
	return 0;
}
void NhapMang(SinhVien dsSV[],int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<"Nhap sinh vien thu "<<i<<"\n";
		cout<<"Nhap ma:";
		cin>>dsSV[i].ma;
		cout<<"Nhap ten:";
		cin.ignore();
		gets(dsSV[i].ten);
	}
}
void XuatMang(SinhVien dsSV[],int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<endl;
	}
}
