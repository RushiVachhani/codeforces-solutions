/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1230A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==b+c+d) { cout<<"YES"; return; }
    else if( a+b==c+d || a+c==b+d || a+d==b+c ) { cout<<"YES"; return; }
    else if( a+b+c==d || a+b+d==c || a+c+d==b ) { cout<<"YES"; return; }
    else { cout<<"NO"; return; }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}