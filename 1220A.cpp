/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1220A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_z=0, count_n=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='z') { count_z++; }
        else if(s[i]=='n') { count_n++; }
    }
    for(int i=0; i<count_n; i++) {
        cout<<1<<" ";
    }
    for(int i=0; i<count_z; i++) {
        cout<<0<<" ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}