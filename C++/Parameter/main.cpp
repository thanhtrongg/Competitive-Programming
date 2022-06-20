#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hamgido(int x, int y=1)
{
	cout<<(x+y);
}
int main(int argc, char** argv) {
	hamgido(9);
	cout<<endl;
	hamgido(9,2);
	return 0;
}
