/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 867A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='S' && s[s.length()-1]=='F') { cout<<"YES\n"; }
    else { cout<<"NO\n"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}