#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define pb push_back
#define pob pop_back
#define FOR(i, a, b) for (int i = a; i <= b; ++i)

vi permutation;
int n = 5;

void search() {
    bool chosen[n+1];
    if (permutation.size() == n) {
        for (int i = 0; i < permutation.size(); ++i) {
            cout << permutation[i] << ' ';
        }
        cout << endl;
    }  
    else {
        FOR(i, 1, n) {
            if (chosen[i]) {
                continue;
            }
            chosen[i] = true;
            permutation.pb(i);
            search();
            chosen[i] = false;
            permutation.pob();
        }
    }
}

void bost(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    bost();
    FOR(i, 1, n) {
        permutation.pb(i);
    }
    do {
        search();
    } while (next_permutation(permutation.begin(), permutation.end()));
    
}