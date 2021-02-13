/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 551A
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
    int ans[n] = {-1};
    for(int i=0; i<n; i++) {
        int cnt = 0;
        for(int j=0; j<n; j++) {
            if(arr[j] > arr[i]) {
                cnt++;
            }
        }
        ans[i] = cnt+1;
    }
    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}