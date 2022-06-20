#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*int x=5,y=3;
	int z=x-- - ++y +2;
	//Step1: ++y ==> y = 4
	//Step2: 5-4+2=3 ==> z = 3
	//Step3: x-- ==> x = 4
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;*/
	
	int x=5,y=10;
	int z=++x - y-- +2;
	//Step1: ++x ==> x = 6
	//Step2: 6-10+2 ==> z = -2
	//Step3: y-- ==> y = 9
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	
	return 0;
}
