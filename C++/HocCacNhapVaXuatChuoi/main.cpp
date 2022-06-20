#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char str1[25];
    cout<<"Moi ban nhap chuoi: ";
    gets(str1);
    cout<<"Chuoi ban nhap la: ";
    puts(str1);
    
    char *str2=new char[25];
    cout<<"Moi ban nhap chuoi: ";
    gets(str2);
    cout<<"Chuoi ban nhap la: ";
    puts(str2);
    cout<<"Kich thuoc thuc su ban nhap: "<<strlen(str2)<<endl;
}