/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 158A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int cutoffScore = arr[k-1], count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]<=0) {continue;}
        else if(arr[i]>=cutoffScore) { count++; }
    }
    cout<< count;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}