/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1345A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    if(n==1 || m==1) { cout<<"YES\n"; return; }
    else if(n==2 && m==2) { cout<<"YES\n"; return; }
    else { cout<<"NO\n"; return; }
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