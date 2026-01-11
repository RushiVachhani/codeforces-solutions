/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1391B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    int count=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char x;
            cin >> x;
            if(n==1 && m==1 && x=='C') { cout<<0<<"\n"; return; }
            if(j==m-1 && x=='R') { count++; }
            if(i==n-1 && x=='D') { count++; }
        }
    }
    cout<<count<<"\n";
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