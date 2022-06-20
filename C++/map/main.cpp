#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    map <int,int> mp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}