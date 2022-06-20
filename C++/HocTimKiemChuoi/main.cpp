#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char str1[25];
    strcpy(str1,"Obama haha ali33");
    char *p=strchr(str1,'l');
    if(p!=NULL){
        cout<<"Tim thay 'l' o vi tri = "<<p-str1<<endl;
    }
    else{
        cout<<"Khong tim thay 'l' trong chuoi"<<endl;
    }
    char str2[250];
    strcpy(str2,"Quanh nam buon ban o mom song, bat ca o song");
    char *p2=strstr(str2,"song");
    if(p2==NULL){
        cout<<"Khong thay song trong chuoi";
    }
    else{
        cout<<"Thay 'song' o vi tri thu = "<<p2-str2<<endl;
    }
}