#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define pb push_back
#define pob pop_back

vi subset;

int n = 3;

void search(int k) {
    if (k == n+1) {
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << ' ';
        }
    }
    else {
        //bao gồm k trong tập con
        subset.pb(k);
        search(k+1);
        subset.pob();
        //không bao gồm k trong tập con
        search(k+1);
    }
}

void bost() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    bost();
    search(1);
}