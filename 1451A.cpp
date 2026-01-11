/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1451A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n==1) { cout<<0<<"\n"; }
    else if(n==2) { cout<<1<<"\n"; }
    else if(n==3) { cout<<2<<"\n"; }
    else if(n%2==0) { cout<<2<<"\n"; }
    else { cout<<3<<"\n"; }
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