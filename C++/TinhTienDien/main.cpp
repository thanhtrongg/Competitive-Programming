#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double n;
	cout<<"Moi ban nhap so Kwh: ";
	cin>>n;	
	if(n<=100) {
		int x1=600*n;
		cout<<"Tien dien ban can phai tra la: "<<x1<<"VND"<<endl;
	}
	else if(n<=150) {	
		int x2=(100*600)+(n-100)*700;
		cout<<"Tien dien ban can phai tra la: "<<x2<<"VND"<<endl;
	}
	else if (n<=200) {
		int x3=(100*600)+(50*700)+(n-150)*900;
		cout<<"Tien dien ban can phai tra la: "<<x3<<"VND"<<endl;
	}
	else if (n>200) {
		int x4=(100*600)+(50*700)+(50*900)+(n-200)*1100;
		cout<<"Tien dien ban can phai tra la: "<<x4<<"VND"<<endl;
	}
	return 0;
}
