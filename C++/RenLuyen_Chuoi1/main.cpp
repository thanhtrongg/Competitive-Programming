#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char *str=new char[255];
    cout<<"Moi ban nhap vao 1 chuoi: ";gets(str);
    for(int i=0;i<strlen(str);i++){
        char c=*(str+i);
        int ascii=(int)c;
        cout<<c<<"=>"<<ascii<<endl; 
    }
}