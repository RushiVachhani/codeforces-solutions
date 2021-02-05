/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 233A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%2!=0) { cout<<-1; return; }
    else {
        int a=1,b=2;
        for(int i=1; i<n; i+=2) {
            cout<<b<<" "<<a<<" ";
            b+=2;
            a+=2;
        }
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}