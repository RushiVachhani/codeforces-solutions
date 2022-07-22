/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1304A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if((y-x)%(a+b)==0) { cout<<(y-x)/(a+b)<<"\n"; return; }
    else { cout<<-1<<"\n"; return; }
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