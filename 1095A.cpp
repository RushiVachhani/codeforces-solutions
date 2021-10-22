/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1095A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0, step = 1; i<n; i+=step) {
        cout<<s[i];
        step++;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}