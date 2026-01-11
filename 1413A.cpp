/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1413A
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
    int ans[n] = {0};
    for(int i=0; i<n; i+=2) {
        ans[i] = arr[i+1]*-1;
        ans[i+1] = arr[i];
    }
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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