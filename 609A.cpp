/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 609A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, size;
    cin >> n >> size;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int count=0, sum=0;
    for(int i=0; i<n; i++) {
       sum = sum + arr[i];
       count++;
       if(sum>=size) { break; }
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