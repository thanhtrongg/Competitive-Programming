#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=10;
	switch(x)
	{
		case 1:
		case 2:
		case 3:
			cout<<"xyz";
			break;
		case 4:
		case 9:
			cout<<"w";
			break;
		default:
			cout<<"Chua ho tro";
	}
	
	/*int n;
	cout<<"Nhap N: ";
	cin>>n;
	int sd=n%2;
	switch(sd)
	{
		case 0: 
			cout<<n<<" la so chan\n"; 
			break;
		case 1:
			cout<<n<<" la so le\n"; 
			break;
			default:
				cout<<"Ban nhap sai gia tri";
	}*/
	
	/*if(sd==0)
	{
		cout<<n<<" la so chan\n";
	}
	else
	{
		cout<<n<<" la so le\n";
	}*/
	return 0;
}
