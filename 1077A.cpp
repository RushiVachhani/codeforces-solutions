/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1077A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,k;
    cin >> a >> b >> k;
    long long right_jumps = 0, left_jumps=0;
    if(k%2!=0) { right_jumps = (k/2)+1; }
    else { right_jumps = k/2; }
    left_jumps = k-right_jumps;
    cout<<(right_jumps*a)-(left_jumps*b)<<"\n";
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