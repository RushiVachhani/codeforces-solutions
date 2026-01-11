/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1443A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    for(int i=0; i<n; i++) {
        cout<<(4*n)-(i*2)<<" ";
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