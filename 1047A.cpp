/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1047A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%3==0 || n%3==1) { cout<<"1 1 "<<n-2; }
    else { cout<<"1 2 "<<n-3; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}