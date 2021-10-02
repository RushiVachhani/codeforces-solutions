/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 908A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int flips = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]>='a' && s[i]<='z') {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') { flips++; }
        }
        else if((s[i]-'0')%2!=0) { flips++; }
    }
    cout<<flips;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}