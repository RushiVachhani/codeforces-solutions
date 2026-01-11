/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1392A
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
    if(arr[0]==arr[n-1]) { cout<<n<<"\n"; return; }
    else { cout<<1<<"\n"; return; }
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