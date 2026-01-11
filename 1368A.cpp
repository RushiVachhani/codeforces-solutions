/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1368A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,n;
    cin >> a >> b >> n;
    int count = 0, integer=a;
    while(integer<=n) {
        if(a>=b) {
            b = a+b;
            count++;
            integer = b;
        }
        else {
            a = a+b;
            count++;
            integer = a;
        }
    }
    cout<<count<<"\n";
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