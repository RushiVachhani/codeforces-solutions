/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1061A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    s%n==0 ? cout<<s/n : cout<<(s/n)+1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}