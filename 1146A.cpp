/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1146A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int counta(string s) {
    int cnt=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]!='a') break;
        else cnt++;
    }
    return cnt;
}

void solve() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cnt_a = counta(s);
    cout<<min((cnt_a*2)-1, (int)s.length());
    return; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}