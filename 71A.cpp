/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 71A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s.length()>10) { cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n"; }
    else { cout<<s<<"\n";}
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