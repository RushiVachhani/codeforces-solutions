/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1459A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string red, blue;
    cin >> red >> blue;
    int redcnt=0, bluecnt=0;
    for(int i=0; i<n; i++) {
        if(red[i]>blue[i]) { redcnt++; }
        else if(red[i]<blue[i]) { bluecnt ++; }
    }
    if(redcnt==bluecnt) { cout<<"EQUAL\n"; }
    else if(redcnt>bluecnt) { cout<<"RED\n"; }
    else if(redcnt<bluecnt) { cout<<"BLUE\n"; }
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