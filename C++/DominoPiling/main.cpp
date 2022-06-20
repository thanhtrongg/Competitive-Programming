#include <bits/stdc++.h>
using namespace std;
long long m[255];
int main() {
    string s;
	long long dem=0;
	cin>>s;
	int n=s.length();
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    
    for(int i=0;i<n;i++){
        dem=dem+m[s[i]];
    }
    
    cout<<dem;
	return 0;
}
