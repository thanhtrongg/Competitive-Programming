#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool songuyento(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}


int main() {
	int n,s1,s2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
	}
	return 0;
}
