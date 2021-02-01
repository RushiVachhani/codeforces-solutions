/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 9A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if(a==1 && b==1) { cout<<"1/1"; return; }
    int max_element = max(a,b);
    int possibilities = (6-max_element)+1;
    int gcd = __gcd(possibilities, 6);
    cout<<possibilities/gcd<<"/"<<6/gcd;
    return;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}