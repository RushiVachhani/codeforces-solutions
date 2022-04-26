/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1191A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int rem = n%4;
    string hp[4] = {"D", "A", "C", "B"}; 
    if(rem==0) { cout << 1 << " A"; }
    else if(rem==1) { cout << 0 << " A"; }
    else if(rem==2) { cout << 1 << " B"; }
    else if(rem==3) { cout << 2 << " A"; }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}