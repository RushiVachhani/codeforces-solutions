/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 716A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,c;
    cin >> n >> c;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(n==1) { cout<<1; return; }
    int count = 0;
    for(int i=0; i<n; i++) {
        if(i==0) { count++; }
        else if(arr[i]-arr[i-1]<=c) { count++; }
        else { count=1; }
    }
    cout<<count;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}