/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1452A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;
    cin >> x >> y;
    int ans = 2*max(x,y) - 1;
    if(x==y) { ans++; }
    cout<<ans<<"\n";
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