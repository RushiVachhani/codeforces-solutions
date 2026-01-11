/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1415A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m, x,y;
    cin >>n >> m >> x >> y;
    cout<<max(x-1,n-x) + max(y-1, m-y)<<"\n";
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