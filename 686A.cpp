/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 686A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x;
    cin >> n >> x;
    string s;
    long long distress = 0;
    for(int i=0; i<n; i++) {
        char operation;
        long long d;
        cin >> operation >> d;
        if(operation=='+') { x+=d; }
        else {
            if(x<d) { distress++; }
            else { x-=d; }
        }
    }
    cout<<x<<" "<<distress;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}