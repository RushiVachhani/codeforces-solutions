/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1180A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int countCells(int n) {
    if(n==1) { return 1; }
    else {
        return (n-2)*4+4 + countCells(n-1);
    }
}

void solve() {
    int n;
    cin >> n;
    cout<<countCells(n);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}