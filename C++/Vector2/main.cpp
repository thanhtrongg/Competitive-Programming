#include <bits/stdc++.h>
using namespace std;
//CÚ PHÁP: vector <T> <tên vector>
//T: kiểu dữ liệu của mảng 1 chiều vector mà chúng ta sẽ dùng
//VD: vector <int> arr; //Khai báo mảng vector chứa các số nguyên 
//vector <SinhVien> list; //khai báo mảng vector chứa các sinh viên 

//Hàm xuất mảng vector
void XuatMangVector(vector <int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" "; //<=> arr[i]
    }
}
int main(){
    vector <int> arr; //Khai báo mảng vector chứa các số nguyên
    for(int i=1;i<=10;i++){
        arr.push_back(i);//Thêm phần tử i vào cuối mảng vector
    }
    cout<<"\tXUAT MANG\n";
    XuatMangVector(arr);
    cout<<"\nKich thuoc thuc su cua mang vecto hien tai: "<<arr.capacity();
}   