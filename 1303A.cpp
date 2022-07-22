/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1303A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int first_pos = -1, last_pos=-1, count=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='1' && first_pos==-1) { first_pos = i; }
        if(s[i]=='1' && i>last_pos) { last_pos = i; }
    }
    for(int i=first_pos; i<=last_pos; i++) {
        if(s[i]=='0') { count++; }
    }
    cout<<count<<"\n";
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