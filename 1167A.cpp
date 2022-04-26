/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1167A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<11) { cout<<"NO\n"; return; }
    else if(n>=11 && s[0]=='8') { cout<<"YES\n"; return; }
    else if(s.find('8')==string::npos) { cout<<"NO\n"; return; }
    else if (n-s.find('8')<11) { cout<<"NO\n"; return; }
    else { cout<<"YES\n"; return; }
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