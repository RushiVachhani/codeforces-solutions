/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1088A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    n==1 ? cout<< -1 : cout<<n-(n%2)<<" "<<2;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}