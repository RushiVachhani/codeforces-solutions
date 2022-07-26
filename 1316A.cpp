/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1316A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++) {
        if((arr[0]+arr[i])<=m) {
            arr[0] = arr[0] + arr[i];
        }
        else {
            arr[0] = arr[0] + m-arr[0];
        }
    }
    cout<<arr[0]<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--) {
        solve();
    }

    return 0;
}