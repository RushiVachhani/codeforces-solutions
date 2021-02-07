/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 282A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    int ans=0;
    while(n--) {
        cin >> s;
        if(s[1]=='+') { ans++; }
        else if(s[1]=='-') { ans--; }
    }
    cout<<ans;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}