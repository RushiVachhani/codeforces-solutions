/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1271A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t,s,v,j,t1c,t2c;
    cin >>t >> s >> v >> j >> t1c >> t2c;
    int t1s, t2s;
    if(t1c >= t2c) {
        t1s = min(t,j);
        t2s = min(v, min(j-t1s, s));
    }
    else {
        t2s = min(v, min(j,s));
        t1s = min(t, j-t2s);
    }
    cout<<t1s*t1c + t2s*t2c;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}