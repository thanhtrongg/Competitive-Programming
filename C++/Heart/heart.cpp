#include <bits/stdc++.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

wstring str = L"8-3 vui vẻ";

void heart(){
    int i, j;
    int n = 10;
    wcout << "\n\n";
    for (i = n / 2; i <= n; i += 2){
        wcout << "\t\t\t\t";
        for (j = 1; j < n - i; j += 2){
            wcout << " ";
        }
        for (j = 1; j <= i; j++){
            wcout << "*";
        }
        for (j = 1; j <= n - i; j++){
            wcout << " ";
        }
        for (j = 1; j <= i; j++){
            wcout << "*";
        }
        wcout << endl;
    }
    for (i = n; i >= 1; i--){
        wcout << "\t\t\t\t";
        for (j = i; j < n; j++){
            wcout << " ";
        }
        for (j = 1; j <= (i * 2) - 1; j++){
            wcout << "*";
        }
        wcout << endl;
    }
}
void xuat(){
    for (; ;)
    {
        wcout << "                                     ";
        wcout << str;
        heart();
        system("Color 0A");
        Sleep(500);
        system("Color 0B");
        Sleep(500);
        system("Color 0C");
        Sleep(500);
        system("Color 0D");
        Sleep(500);
        system("Color 0E");
        Sleep(500);
        system("cls");
    }
}

const int N = 1005;
vector <int> g[N];
bool danhdau[N];

void BFS(int st){
    queue <int> q;
    q.push(st);
    danhdau[st] = true;
    while(!q.empty()){
        int u = q.front();
        cout << u << ' ';
        q.pop();
        for(auto x : g[u]){
            if(!danhdau[x]){
                danhdau[x] = true;
                q.push(x);               
            }
        }
    }
}

int main(){
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    system("cls");
    wcout << "                                     ";
    int x = 0;
    while (str[x] != '\0'){
	    wcout << str[x];
	    Sleep(500);
	    x++;
    };
    system("cls");
    Sleep(1000);
    xuat();
}