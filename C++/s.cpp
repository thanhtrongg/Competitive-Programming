#include <bits/stdc++.h>

using namespace std;

int a = 1, b = 2, c, t = 0; 

int main() {
    while (t < 10)
    {
        a = a + b;
        c = a;
        a = b;
        b = c;
        t = t + 1;
        cout << "a = " << a << "\t";
        cout << "b = " << b << "\t";
        cout << "c = " << c << "\t";
        cout << "t = " << t << "\t";
        cout << "\n";

    } 
}
