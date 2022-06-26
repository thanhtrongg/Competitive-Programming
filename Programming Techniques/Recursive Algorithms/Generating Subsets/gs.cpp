#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define fi first
#define se second
#define pu push
#define fr front
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define mp make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++);
#define endl "\n";

vi subset;

int n = 3;

void bost() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void search(int k) {
    if (k == n+1) {
        //process subset
    } else {
        //include k in the subset
        subset.pb(k);
        search(k+1);
        subset.pob();
        //don't include k in the subset
        search(k+1);
    }
    cout << k;
}

int main() {
    bost();
    search(1);
}
