/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 112A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1<s2) { cout << -1; }
    else if(s1>s2) { cout<<1; }
    else { cout<<0; }
    return; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}