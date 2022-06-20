#include <iostream>
using namespace std;
int fib(int n){
	if(n<=2) return 1;
	else return fib(n-1) + fib(n-2);
}
void xuatdayfib(int n){
	for(int i=1;i<=n;i++)
	{
		cout<<fib(i)<<"\t";
	}
}
int main() {
	int n=8;
	cout<<fib(n);
	cout<<"\nDay Fibonacci: \n";
	xuatdayfib(n);
	return 0;
}
