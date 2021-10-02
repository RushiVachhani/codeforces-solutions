/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 935A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for(int i=1; i<n; i++) {
        if((n-i)%i==0) {
            count++;
        }
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