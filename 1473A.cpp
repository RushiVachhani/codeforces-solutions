/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1473A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if( ((arr[0]+arr[1])<=d) || arr[n-1]<=d) { cout<<"YES\n"; }
    else { cout<<"NO\n"; }
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