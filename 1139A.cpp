/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1139A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<n; i++) {
        if((s[i]-'0')%2==0) { ans += i+1; }
    }
    cout<<ans;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}