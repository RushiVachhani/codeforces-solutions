/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1358A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >>n >> m;
    if(n%2==0 || m%2==0) { cout<< (n*m)/2<<"\n"; return; }
    else { cout<<(n*m)/2 + 1<<"\n"; return; }
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