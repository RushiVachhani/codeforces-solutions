/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1091A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int y,b,r;
    cin >> y >> b >> r;
    cout<<min(y+2, min(b+1,r))*3 - 3;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}