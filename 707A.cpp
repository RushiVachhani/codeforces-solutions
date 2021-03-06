/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 707A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,flag=0;
    char x;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> x;
            if(x=='C' || x=='M' || x=='Y') { flag=1; }
        }
    }
    if(flag==0) { cout<<"#Black&White"; }
    else { cout<<"#Color"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}