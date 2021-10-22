/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1102A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if( ((n*(n+1))/2) % 2 == 0 ) { cout<<"0"; }
    else { cout<<"1"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}