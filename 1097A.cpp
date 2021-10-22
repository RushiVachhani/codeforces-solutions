/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1097A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string n,x;
    cin >> n;
    int flag = 0;
    for(int i=0; i<5; i++) {
        cin >> x;
        if(x[0]==n[0]) { flag = 1; }
        else if(x[1]==n[1]) { flag = 1; }
    }
    if(flag==1) { cout<<"YES\n"; return; }
    else { cout<<"NO\n"; return; }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}