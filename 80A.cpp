/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 80A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for(int i=2; i<=(int)sqrt(x); i++) {
        if(x%i==0) { return false; }
    }
    return true;
}

void solve() {
    int n,m;
    cin >> n>>m;
    for(int i=n+1; i<=m; i++) {
        if(isPrime(i)==true) {
            if(i==m) { cout<<"YES"; return; }
            else { cout<<"NO"; return; }
        }
    }
    cout<<"NO";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}