/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1065A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long t, a, b, c;
    cin >> t >> a >> b >> c;
    long long chocolate_brought = t/c;
    long long chocolate_free = (chocolate_brought/a)*b;
    cout<<chocolate_brought+chocolate_free<<"\n";
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