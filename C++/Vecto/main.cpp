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
    arr.resize(5,10); //Cấp phát cho mảng chứa 5 phần tử
    cout<<"\n\tXuat Mang \n";
    XuatMangVector(arr);
    
    //Co mảng lại 
    arr.resize(3);//Co mảng vector arr lại còn 3 phần tử
    cout<<"\n\tXuat Mang \n";
    XuatMangVector(arr);

    //Dãn mảng lại 
    arr.resize(10, 21);//Dãn mảng vector arr ra 10 phần tử
    cout<<"\n\tXuat Mang \n";
    XuatMangVector(arr);
}