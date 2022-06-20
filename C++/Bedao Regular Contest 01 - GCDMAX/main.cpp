#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	return a==0 ? b : gcd(b%a, a);
}

int main(){
	int n,t;	
	cin>>n;
	if(n==1)
	{
		cout<<(int)1e9;
		exit(0);
	}
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}		
	t = 0;	
	for(int i = 0;i<n;++i)
	{
		for(int j = i+1;j<n;++j)
		{
			t = max(t,gcd(arr[i],arr[j]));
		}
	}
	cout<<t<<endl;
	return 0;
}
