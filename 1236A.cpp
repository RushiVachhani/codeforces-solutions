/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1236A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    int minimum = min(b, c/2);
    if(minimum > 0) {
        ans = ans + 3*minimum;
        b -= minimum;
    }
    minimum = min(a, b/2);
    if(minimum > 0) {
        ans = ans + 3*minimum;
    }
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