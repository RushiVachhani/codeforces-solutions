/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1223A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n==2) { cout<<2<<"\n"; return; }
    if(n%2!=0) { cout<<1<<"\n"; return; }
    if(n%2==0) { cout<<0<<"\n"; return; }
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