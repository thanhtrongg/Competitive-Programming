#include <iostream>
using namespace std;

int main() {
	int a=20, b=15;
	int *pa,*pb,temp;
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	cout<<"a = "<<a<<endl;	
	cout<<"b = "<<b<<endl;
	cout<<"Dia chi cua con tro pa = "<<pa<<endl;
	pa++;
	cout<<"Dia chi cua con tro pa = "<<pa<<endl;
	return 0;
}
