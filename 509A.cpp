/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 509A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || j==0) { arr[i][j] = 1; }
            else { arr[i][j] = arr[i-1][j] + arr[i][j-1]; }
        }
    }
    cout<<arr[n-1][n-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}