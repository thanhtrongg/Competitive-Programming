#include <bits/stdc++.h>
using namespace std;
int n,x,y,a,b,c,d;
int main() {
	a=b=c=d=-1e9;
    cin>>n;
    for(int i=0;i<n;i++)
	{
    	cin>>x>>y;
    	a=max(a,x+y);
    	b=max(b,x-y);
    	c=max(c,y-x);
    	d=max(d,-x-y);
    }
    cout<<a+b+c+d+4;
}
