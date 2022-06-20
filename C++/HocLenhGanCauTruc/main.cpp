#include <bits/stdc++.h>
using namespace std;
struct book{
    char title[50];
    char author[50];
    int pages;
    float price;
};
int main(){
    book b;
    cout<<"Nhap ten sach: ";gets(b.title);
    cout<<"Nhap tac gia: ";gets(b.author);
    cout<<"Nhap so trang: ";cin>>b.pages;
    cout<<"Nhap gia tien: ";cin>>b.price;
    cout<<"---------------------------------------\n";
    book a=b;
    cout<<"Ten sach: "<<a.title<<endl;
    cout<<"Ten tac gia: "<<a.author<<endl;
    cout<<"So tran: "<<a.pages<<endl;
    cout<<"Gia tien: "<<a.price<<endl;
}
