#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char s1[25];
    char s2[25];
    strcpy(s1,"Xin Chao!");
    strcpy(s2,"Obama");
    int kq=strcmp(s1,s2);
    cout<<"Ket qua = "<<kq<<endl;
    if(kq==0){
        cout<<"s1=s2"<<endl;
    }
    else if(kq<0){
        cout<<"s1<s2"<<endl;
    }
    else{
        cout<<"s1>s2"<<endl;
    }
    char s3[25],s4[50];
    strcpy(s3,"Cha me thoi doi an o bac");
    strcpy(s4,"Co chong ho hung cung nhu khong");
    int kq2=strncmp(s3,s4,3);
    if(kq2==0){
        cout<<"s3=s4"<<endl;
    }
    else if(kq2<0){
        cout<<"s3<s4"<<endl;
    }
    else{
        cout<<"s3>s4"<<endl;
    }
}