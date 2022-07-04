/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1243A
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
    sort(arr, arr+n, greater<int>());
    int ans = 1;
    for(int i=0; i<n; i++) {
        if(arr[i]<ans) {
            break;
        }
        else {
            ans++;
        }
    }
    if(ans==1) { cout<<1<<"\n"; return; }
    else {
        cout<<ans-1<<"\n";
        return;
    }
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