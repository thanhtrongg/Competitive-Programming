
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int *p[5];
	for(int i=0;i<5;i++)
	{
		p[i]=new int;
		*p[i]=i*2;
	}
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<"=>"<<*p[i]<<endl;
	}
	return 0;
}
