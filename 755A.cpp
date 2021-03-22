/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 755A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n==1) { cout<<3; }
    else if(n==2) { cout<<100; }
    else { cout<<n-2; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}