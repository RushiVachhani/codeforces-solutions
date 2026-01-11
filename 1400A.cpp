/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1400A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++) {
        cout<<s[n-1];
    }
    cout<<"\n";
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