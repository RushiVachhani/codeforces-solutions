/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 492A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int getSum(int n){
    return (n*(n+1))/2;
}

void solve() {
    int n;
    cin >> n;
    int total = 0;
    if(n==1) { cout<<1; return; }
    else {
        int level = 0;
        while(n){
            level++;
            total = total + getSum(level);
            if(total>n) { break; }
        }
        cout<<--level;
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}