#include <bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string masv;
        string tensv;
        int tuoi;
    public:
        SinhVien(){
            masv = "TTTDZ2108";
            tensv =  "Tran Thanh Trong";
            tuoi = 16;
        }
        void noiChuyenTrongGioHoc(){
            cout << "Noi linh tinh" << "\n";
        }
        void choiGame(){
            cout << "Choi game" << "\n";
        }
        void hocBai(){
            cout << "Doc sach" << "\n";
        }
        void xuatThongTin(){
            cout << masv << "\n";
            cout << tensv << "\n";
            cout << tuoi << "\n";
        }
};

int main(){
    SinhVien a;
    a.choiGame();
    a.xuatThongTin();
    return 0;
}