#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char str1[]="Obama hahaha ali33";
    for(int i=0;i<strlen(str1);i++){
        char c=str1[i];
        putchar(toupper(c));
    }
    cout<<endl;
    char str2[]="OBAMA HAHAHA ALI33";
    for(int i=0;i<strlen(str2);i++){
        char c1=str2[i];
        putchar(tolower(c1));
    }
}