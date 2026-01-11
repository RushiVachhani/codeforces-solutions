/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1466A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    set<int> ans;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            ans.insert(abs(arr[j]-arr[i]));
        }
    }
    cout<<ans.size()<<"\n";
    return ;
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