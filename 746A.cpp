/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 746A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = min(a, min(b/2, c/4));
    cout<<7*m;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}