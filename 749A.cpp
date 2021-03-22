/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 749A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout<<n/2<<"\n";

    for(int i=0; i<n/2; i++) {
        if(n%2!=0 && i==(n/2)-1) { cout<<3; return; }
        cout<<2<<" ";
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}