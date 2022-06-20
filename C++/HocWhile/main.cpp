#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	int i=1;
	cout<<"Nhap 1 so: ";cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"Sum = "<<sum;
	return 0;
}
