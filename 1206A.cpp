/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1206A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    cout<<a[n-1]<<" "<<b[m-1];
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}