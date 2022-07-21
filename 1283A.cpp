/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1283A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int h, m;
    cin >> h >> m;
    int timeElapsed = 0;
    timeElapsed = h*60 + m;
    cout<<1440-timeElapsed<<"\n";
    return ;
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