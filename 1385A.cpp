/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1385A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a[3];
    for(int i=0; i<3; i++) {
        cin >> a[i];
    }
    sort(a,a+3);
    if(a[1]!=a[2]) { cout<<"NO\n"; return; }
    else {
        cout<<"YES\n";
        cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";
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