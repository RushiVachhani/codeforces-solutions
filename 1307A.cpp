/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1307A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    int arr[n+1];
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    for(int i=2; i<=n; i++) {
        int moves = min(arr[i], d/(i-1));
        arr[1] += moves;
        d = d - moves*(i-1);
    }
    cout<<arr[1]<<"\n";
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