/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 330A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    char x;
    int row[n]={0}, col[m]={0};
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> x;
            if(x=='S') {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int cntrows=0, cntcols=0;
    for(int i=0; i<n; i++) {
        if(row[i]==1) { cntrows++; }
    }
    for(int i=0; i<m; i++) {
        if(col[i]==1) { cntcols++; }
    }
    cout<<(n*m)-(cntcols*cntrows);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}