/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1281A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s.substr(s.length()-2,2)=="po") { cout<<"FILIPINO\n"; return; }
    else if (s.substr(s.length()-4,4)=="desu" || s.substr(s.length()-4,4)=="masu") { cout<<"JAPANESE\n"; return; }
    else { cout<<"KOREAN\n"; return; }
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