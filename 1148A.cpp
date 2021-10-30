/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1148A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;
    cin >> a >> b >> c;
    cout<< 2*c + min(a,b) + min(max(a,b), min(a,b)+1);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}