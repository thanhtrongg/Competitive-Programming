#include <bits/stdc++.h>
using namespace std;
void TachLayTrai(char *strGoc,char *&strDau,char *&strSau){
    char *p=strchr(strGoc,' ');
    int lSpace=p-strGoc;
    strncpy(strDau,strGoc,lSpace);
    p=p+1;
    strSau=p;
}
void TachLayPhai(char *strGoc,char *&strCuoi,char *&strTruoc)
{
	int j=0;
	for(int i=strlen(strGoc)-1;i>=0;i--){
		if(strGoc[i]==' '){
			j=i+1;
			break;
		}   
	}
	int i2=0;
	for(int i=j;i<strlen(strGoc);i++){
			strCuoi[i2]=strGoc[i];
			i2++;
		}
	strncpy(strTruoc,strGoc,j-1);
}
int main(){
    char *strGoc=new char[255];
    strcpy(strGoc,"Tran Thanh Trong");
    char *strDau=new char[255];
    char *strSau=new char[255];
    TachLayTrai(strGoc,strDau,strSau);
    cout<<strDau<<endl;
    cout<<strSau<<endl;

    cout<<"\n---------------------\n";
	char *strCuoi=new char[255];
	char *strTruoc=new char [255];
	strcpy(strCuoi,"");
	strcpy(strTruoc,"");
	TachLayPhai(strGoc,strCuoi,strTruoc);
	cout<<strCuoi<<endl;
	cout<<strTruoc<<endl;
}