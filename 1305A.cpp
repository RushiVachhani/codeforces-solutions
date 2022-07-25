/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1305A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int necklaces[n], bracelets[n];
    for(int i=0; i<n; i++) {
        cin >> necklaces[i];
    }
    for(int i=0; i<n; i++) {
        cin >> bracelets[i];
    }
    sort(necklaces, necklaces+n);
    sort(bracelets, bracelets+n);
    for(int i=0; i<n; i++) {
        cout << necklaces[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<n; i++) {
        cout << bracelets[i]<<" ";
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