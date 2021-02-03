/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 119A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,n;
    cin >> a>>b>>n;
    int number = a, player = 0;
    while(true) {
        if(n<__gcd(number,n)) { 
            player==0 ? cout<<1 : cout<<0; 
            return;
        }
        else {
            n = n - __gcd(number, n);
            number==a ? number = b : number = a;
            player==0 ? player = 1 : player = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}