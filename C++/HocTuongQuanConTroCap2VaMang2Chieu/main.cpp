#include <bits/stdc++.h>
using namespace std;

int main(){
    int **p=new int *[5];
    for(int i=0;i<5;i++)
    {
        p[i]=new int[7];//*(p+i)=new int[7]
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<7;j++)
        {
            p[i][j]=i+j;//*(*(p+i)+j)=i+j
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<7;j++)
        {
            cout<<*(*(p+i)+j)<<"\t";
            
        }
        cout<<"\n";
    }
    //Huy bo nho:
    for(int i=0;i<5;i++)
    {
        delete *(p+i);
    }
    delete p;
    p=NULL;
    return 0;
}