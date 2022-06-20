#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int row,col,r,t;
	cout<<"Nhap so dong: ";cin>>row;
	cout<<"Nhap so cot: ";cin>>col;
	int M[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			M[i][j]=rand()%100;
		}
	}
	cout<<"Mang sau khi nhap ngau nhien: \n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<M[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Nhap dong ban muon xuat: ";
	cin>>r;	
	for(int j=0;j<col;j++)
	{
		cout<<M[r][j]<<"\t";
	}
	cout<<"\nNhap cot ban muon xuat: ";
	cin>>t;	
	for(int i=0;i<row;i++)
	{
		cout<<M[i][t]<<"\t";
	}
	cout<<"\nDuong cheo chinh: \n";
	if(row==col)
	{
		for(int i=0;i<row;i++)
		{
			cout<<M[i][i]<<"\t";
		}
		cout<<"\nDuong cheo phu: \n";
		for(int i=0;i<row;i++)
		{
			cout<<M[i][row-i-1]<<"\t";
		}
	}
	return 0;
}
