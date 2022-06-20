#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	double x;
	cout<<"Moi ban nhap so nguyen n = ";
	cin>>n;
	cout<<"Moi ban nhap so thuc x = ";
	cin>>x;
	double A=pow((x*x+x+1),n)+pow((x*x-x+1),n);
	cout<<"A = "<<A;		
	return 0;
}
