/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1382A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int m,n;
    cin >> m >> n;
    int a1[m], a2[n];
    for(int i=0; i<m; i++) {
        cin>>a1[i];
    }
    for(int i=0; i<n; i++) {
        cin>>a2[i];
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a1[i]==a2[j]) {
                cout<<"YES\n";
                cout<<1<<" "<<a1[i]<<"\n";
                return ;
            }
        }
    }
    cout<<"NO\n";
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