/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1173A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int determine(int a, int b) {
    return (a==b ? 2 : (a < b));
}

void solve() {
    int x,y,z;
    cin >> x >> y >> z;
    char ans[4] = {'+', '-', '0', '?'};
    cout << ans[determine(x + z, y) == determine(x, y + z) ? determine(x, y) : 3];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}