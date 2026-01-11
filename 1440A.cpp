/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1440A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='0') { ans += min(c0, h+c1); }
        else { ans += min(c1, h+c0); }
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