/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1428A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2 && y1 == y2) { cout<<0<<"\n"; return; }
    else if(x1==x2) { cout<<abs(y1-y2)<<"\n"; return; }
    else if(y1==y2) { cout<<abs(x1-x2)<<"\n"; return; }
    else { cout<<abs(x1-x2)+abs(y1-y2)+2<<"\n"; return; } 
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