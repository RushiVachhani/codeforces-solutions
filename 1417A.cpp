/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1417A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i=1; i<n; i++) {
        ans = ans + (k-arr[i])/arr[0];
    }
    cout<<ans<<"\n";
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