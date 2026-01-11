/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1436A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    if(sum==k) { cout<<"YES\n"; return; }
    else { cout<<"NO\n"; return; }
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