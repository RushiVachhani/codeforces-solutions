/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 734B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int dig2, dig3, dig5, dig6;
    cin >> dig2 >> dig3 >> dig5 >> dig6;
    int max_sum = 0, no_256=0, no_32=0;
    no_256 = min(dig2, min(dig5, dig6));
    dig2 -= no_256;
    no_32 = min(dig3, dig2);
    max_sum = (no_32*32)+(no_256*256);
    cout<<max_sum;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}