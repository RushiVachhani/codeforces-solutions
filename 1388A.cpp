/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1388A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n<=30) { cout<<"NO\n"; return; }
    else {
        cout<<"YES\n";
        if(n==36 || n==40 || n==44) { cout<<6<<" "<<10<<" "<<" "<<15<<" "<<n-31<<"\n"; }
        else { cout<<6<<" "<<10<<" "<<" "<<14<<" "<<n-30<<"\n"; }
        return;
    }
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