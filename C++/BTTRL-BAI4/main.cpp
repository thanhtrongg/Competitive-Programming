#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int so;
	cout<<"Moi ban nhap so nguyen bat ky = ";
	cin>>so;
	cout<<"So sau khi doi nguoc la = ";
	for (; so != 0; so=so/10){
		cout<<so%10;
	}
	return 0;
}
