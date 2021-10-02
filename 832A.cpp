/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 832A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;
    if((n/k)%2==0) { cout<<"NO"; }
    else{ cout<<"YES"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}