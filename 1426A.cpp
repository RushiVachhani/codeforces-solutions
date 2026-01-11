/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1426A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    if(n==1 || n==2) {cout<<1<<"\n"; return;}
    int floor_no=1;
    while(floor_no>0) {
        if((floor_no*x)+2>=n) {
            cout<<floor_no+1<<"\n";
            return;
        }
        floor_no++;
    }
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