#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char str[255];  
    cout<<"Moi ban nhap vao 1 chuoi: ";gets(str);
    for(int i=strlen(str)-1;i>=0;i--){
        cout<<str[i];
    }
}
