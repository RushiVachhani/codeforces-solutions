/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1461A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s = "abc";
    for(int i=0; i<n; i++) {
        cout<<s[i%3];
    }
    cout<<"\n";
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