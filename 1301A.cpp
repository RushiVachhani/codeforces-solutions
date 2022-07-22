/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1301A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0; i<c.length(); i++) {
        if( c[i]!=a[i] && c[i]!=b[i] ) { cout<<"NO\n"; return; }
    }
    cout<<"YES\n";
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