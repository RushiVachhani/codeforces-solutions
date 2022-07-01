/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1216A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<s.length(); i+=2) {
        if(s[i]==s[i+1]) {
            cnt++;
            s[i]=='a' ? s[i]='b' : s[i]='a';
        }
    }
    cout<<cnt<<"\n";
    for(int i=0; i<s.length(); i++) {
        cout<<s[i];
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}