/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1041A
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
    cout<<(arr[n-1] - arr[0]) + 1 - n;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}