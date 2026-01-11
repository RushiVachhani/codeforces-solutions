/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1411A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for(int i=n-1; i>=0; i--) {
        if(s[i]==')') { 
            count++;
        }
        else { break; }
    }
    if( 2*count > n ) { cout<<"Yes\n"; }
    else { cout<<"No\n"; }
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