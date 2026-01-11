/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1430B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    long long sum=0;
    sort(arr, arr+n, greater<int>());
    if(k==0) { cout<<arr[0]-arr[n-1]<<"\n";}
    else if (k>n) {cout<<accumulate(arr, arr+n, sum)<<"\n";}
    else { cout<<accumulate(arr, arr+k+1, sum)<<"\n";}
    return;
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