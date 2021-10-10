/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1006A
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
        if(arr[i]%2==0) { arr[i]--; }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}