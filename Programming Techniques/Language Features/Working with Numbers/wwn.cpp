#include <bits/stdc++.h>

using namespace std;

void bost() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Integers() {
    long long x = 123456789123456789LL;
    int a = 123456789;
    long long b = a * a;
    cout << b << "\n";
}

void MA() { //Modular Arithmetic
    
}

void FPN() { //Floating Point Numbers
    double x = 0.3 * 3 + 0.1;
    cout << x << "\n"; //1
    printf("%0.20f\n", x); //0.99999999999999988898
}

int main() {
    bost();
    Integers();
    MA();
    FPN();
}
