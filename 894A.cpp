/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 894A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int count=0;
    for(int i=0; i<s.length(); i++) {
        for(int j=i+1; j<s.length(); j++) {
            for(int k=j+1; k<s.length(); k++) {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q') {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}