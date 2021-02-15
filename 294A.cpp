/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 294A
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
    int m;
    cin >> m;
    for(int i=0; i<m; i++) {
        int wire, killed;
        cin >> wire >> killed;
        wire--;
        if(wire==0) {
            arr[wire+1] = arr[wire+1] + abs(arr[wire]-killed);
            arr[wire]=0;
        }
        else if(wire==n-1) {
            arr[wire-1] = arr[wire-1] + killed-1;
            arr[wire]=0;
        }
        else {
            arr[wire-1] = arr[wire-1] + killed-1;
            arr[wire+1] = arr[wire+1] + abs(arr[wire]-killed);
            arr[wire]=0;
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}