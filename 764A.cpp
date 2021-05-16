/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 764A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m , z;
    cin >> n >> m >> z;
    int ans=0;
    for(int i=1; i<=z; i++) {
        if(i%n==0 && i%m==0) { ans++; }
    }
    cout<<ans;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}