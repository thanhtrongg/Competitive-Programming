#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char str1[25],str2[25];
    strcpy(str1,"Obama");
    strcpy(str2,"Ali33");
    strcat(str1,str2);
    puts(str1);
    char ho[25],ten[25],hovaten[50];
    cout<<"Nhap ho: ";gets(ho);
    cout<<"Nhap ten: ";gets(ten);
    strcpy(hovaten,"");
    strcat(hovaten,ho);
    strcat(hovaten," ");
    strcat(hovaten,ten);
    puts(hovaten);

    char str3[25],str4[25];
    strcpy(str3, "To be ");
    strcpy(str4, "or not to be");
    strncat(str3,str4,6);
    cout<<"Chuoi sau khi noi: ";
    puts(str3);
}