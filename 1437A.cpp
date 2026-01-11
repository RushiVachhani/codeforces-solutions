/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1437A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l,r;
    cin >> l >> r;
    2*l > r ? cout<<"YES\n" : cout<<"NO\n";
    return;
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