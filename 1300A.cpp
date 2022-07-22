/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1300A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x, positive_sum = 0, negative_sum = 0, operations = 0;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x==0) {
            operations++;
            positive_sum+=1;
        }
        else {
            x>0 ? positive_sum+=x : negative_sum-=x ;
        }
    }
    if(positive_sum==negative_sum) { operations++; }
    cout<<operations<<"\n";
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