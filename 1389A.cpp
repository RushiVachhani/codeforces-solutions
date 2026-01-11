/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1389A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l,r;
    cin >>l>>r;
    if((2*l)>r) { cout<<-1<<" "<<-1; }
    else { cout<<l<<" "<<2*l; }
    cout<<"\n";
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