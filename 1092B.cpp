/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1092B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i=0; i<n; i+=2) {
        ans += arr[i+1] - arr[i];
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