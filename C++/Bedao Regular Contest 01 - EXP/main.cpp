#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	long long ax,bx,ay,by,Q;
	cin>>Q;
	for(long long i=0;i<Q;i++)
	{
		cin>> ax >> bx >> ay >> by;
		long long t=ax*pow(10,bx);
		long long r=ay*pow(10,by);
		if(t>r)
		{
			cout<<"X > Y"<<endl;
			continue;
		}
		else if(t<r || ax==0 || ay==0)
		{
			cout<<"X < Y"<<endl;
			continue;
		}
		else if(t==r)
		{
			cout<<"X = Y"<<endl;
			continue;
		}	
	}
	return 0;
}
