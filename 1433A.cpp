/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1433A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int getFirstDigit(int x) {
    return x%10;
}

int getNoOfDigits(int x) {
    int count = 0;
    while(x) {
        x = x/10;
        count ++;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    int d,nd, keypress;
    d = getFirstDigit(n);
    nd = getNoOfDigits(n);
    keypress = (d-1)*10 + (nd*(nd+1))/2;
    cout<<keypress<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}