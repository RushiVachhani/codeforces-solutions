/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1108A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1!=r2) { cout<<l1<<" "<<r2<<"\n"; }
    else { cout<<r1<<" "<<l2<<"\n";}
    
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