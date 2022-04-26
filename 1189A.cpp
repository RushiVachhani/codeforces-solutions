/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1189A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count1=0, count0=0;
    for(int i=0; i<n; i++) {
        if(s[i]=='0') { count0++; }
        else { count1++; }
    }
    if(count0!=count1) { cout<<"1\n"<<s; }
    else { cout<<"2\n"<<s[0]<<" "<<s.substr(1,s.length()-1); }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}