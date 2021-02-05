/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 214A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a, b;
    int ans=0;
    for(a=0; a*a <=n && a <=m; a++) {
        b = n - a*a;
        if( a+(b*b) == m) { ans++; }
    }
    cout<<ans<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}