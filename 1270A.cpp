/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1270A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int arr1[k1], arr2[k2];
    for(int i=0; i<k1; i++) {
        cin >> arr1[i];
    }
    for(int i=0; i<k2; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1+k1);
    sort(arr2, arr2+k2);
    if(arr1[k1-1] > arr2[k2-1]) { cout<<"YES\n"; return; }
    else { cout<<"NO\n"; return; }
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