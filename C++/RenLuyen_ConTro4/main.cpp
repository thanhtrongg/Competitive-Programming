#include <bits/stdc++.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMaTran(int **&M, int n){
    M=new int*[n];
    for(int i=0;i<n;i++){
        *(M+i)=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(*(M+i)+j)=rand()%11;
        }
    }
}
void XuatMaTran(int **M, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<*(*(M+i)+j)<<"\t";
        }
        cout<<endl;
    }
}
int **CongMaTran(int **M1, int **M2, int n){
    int **M3=new int*[n];
    for(int i=0;i<n;i++){
        *(M3+i)=new int[n];   
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(*(M3+i)+j)=*(*(M1+i)+j)+*(*(M2+i)+j);
        }
    }
    return M3;
}
int main(){
    srand(time(NULL));
    int **M1,**M2,n=3;
    NhapMaTran(M1,n);
    NhapMaTran(M2,n);
    cout<<"Ma tran M1: \n";
    XuatMaTran(M1,n);
    cout<<"\nMa tran M2: \n";
    XuatMaTran(M2,n);
    cout<<"\nMa tran M3: \n";
    int **M3=CongMaTran(M1,M2,n);
    XuatMaTran(M3,n);
}