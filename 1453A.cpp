/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1453A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    bool arr[101] = {false};
    int cancelled = 0;
    for(int i=0; i<n; i++) {
        int input;
        cin >> input;
        arr[input]=true;
    }
    for(int i=0; i<m; i++) {
        int input;
        cin >> input;
        if(arr[input]==true) { cancelled++; }
    }
    cout<<cancelled<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}