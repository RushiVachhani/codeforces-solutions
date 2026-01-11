/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1462B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i <= 4; i++) {
        if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020") { cout<<"YES\n"; return; }
    }
    cout<<"NO\n";
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