/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1392B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;
    long long arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(k>1) {
        k = 2+k%2;
    }
    while(k--) {
        long long MAX = -1000000000;
        for(int i=0; i<n; i++) {
            MAX = max(MAX, arr[i]); 
        }
        for(int i=0; i<n; i++) {
            arr[i] = MAX - arr[i];
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
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