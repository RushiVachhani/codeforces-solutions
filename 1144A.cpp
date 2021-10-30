/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1144A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for(int i=1; i<s.length(); i++) {
        if(s[i]-s[i-1]!=1) { cout<<"No\n"; return; }
    }
    cout<<"Yes\n";
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