/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1257A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,a,b;
    cin >>n>>x>>a>>b;
    if(x==0) { cout<<abs(a-b)<<"\n"; return; }
    else { cout<<min(n-1, abs(a-b)+x)<<"\n"; return; }
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