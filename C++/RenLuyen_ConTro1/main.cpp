#include <bits/stdc++.h>
using namespace std;

void swap(double *&pa, double *&pb){
    double temp=*pa;
    *pa=*pb;
    *pb=temp;
}

int main(){
    double a=5.5;
    double b=6.5;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}