/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1323A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector< vector <int>> ans(2);
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        if(x%2==0) { ans[0].push_back(i); }
        else { ans[1].push_back(i); }
    }
    if(ans[0].size()!=0) { cout<<1<<"\n"<<ans[0][0]+1<<"\n"; return; }
    else if(ans[1].size()>1) { cout<<2<<"\n"<<ans[1][0]+1<<" "<<ans[1][1]+1<<"\n"; return; }
    else {cout<<"-1\n"; return; }
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