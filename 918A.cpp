/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 918A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void fib(int x, int y, int n, char *ans) {
    if(x+y > n) {
        return;
    }
    else {
        ans[x+y] = 'O';
        fib(y,x+y,n, ans);
    }
    return;
}

void solve() {
    int n;
    cin >> n;
    char ans[n+1];
    for(int i=0; i<n+1; i++) {
        ans[i] = 'o';
    }
    ans[1]='O';
    ans[2]='O';
    fib(1,2,n,ans);
    for(int i=1;i<n+1;i++) {
        cout<<ans[i];
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}