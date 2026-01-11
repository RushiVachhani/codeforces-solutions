/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1421A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout<<(a^(a&b))+(b^(a&b))<<"\n";
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