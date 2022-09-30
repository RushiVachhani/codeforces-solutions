/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1353A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, diff;
    cin >> n >> m;
    if(n==1) { cout<<0<<"\n"; return; }
    else if(n==2) { cout << m << "\n"; return; }
    else { cout<< 2*m << "\n"; return; }
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