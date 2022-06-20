#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min(int a, int b);
int main(int argc, char** argv) {
	int c=5;
	int d=6;
	int x=min(c,d);
	cout<<x;
	return 0;
}
int min(int a, int b)
{
	return a<b?a:b;
}
