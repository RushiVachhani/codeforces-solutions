/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1475A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    while(n) {
        if(n==1) { break; }
        if(n%2!=0) { cout<<"YES\n"; return; }
        else {
            n=n/2;
        }
    }
    cout<<"NO\n";
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