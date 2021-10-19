/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1080A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    long long arr[3] = {2*n, 5*n, 8*n};
    int ans = 0;
    for(int i=0; i<3; i++) {
        ans += (arr[i]+k-1)/k;    
    }
    cout<<ans;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}