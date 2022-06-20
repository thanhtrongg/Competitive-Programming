#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,sch=0;
	cout<<"Nhap 1 so: ";cin>>n;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sch+=i;
			cout<<sch<<"\t";
		}
	}
	if(sch==n)
	{
	cout<<"\n"<<n<<" la so hoan thien";
	}
	else
	{
	cout<<"\n"<<n<<" khong la so hoan thien";
	}
	return 0;
}
