/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 939A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<n+1; i++) {
        cin >> arr[i];
    }
    for(int i=1; i<n+1; i++) {
        if(arr[arr[arr[i]]]==i) { cout<<"YES"; return; }
    }
    cout<<"NO";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}