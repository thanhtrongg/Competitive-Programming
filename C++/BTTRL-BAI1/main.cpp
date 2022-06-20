#include <iostream>
using namespace std;

int main() {
	char kt;
	cout<<"Moi ban nhap 1 ky tu tren ban phim: ";
	cin>>kt;
	cout<<"Ma ACSII cua ky tu "<<kt<<" la "<<(int)kt<<endl;
	int kt1=(int)kt+1;
	cout<<"Ky tu tiep theo cua ky tu "<<kt<<" la "<<(char)kt1;
	return 0;
}
