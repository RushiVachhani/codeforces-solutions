/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 401A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int sum=0;
    for(int i=0; i<n; i++) {
        int card;
        cin >> card;
        sum += card;
    }
    sum = abs(sum);
    int cardRequired;
    cardRequired = sum/x;
    if(sum%x!=0) { cardRequired++; }
    cout<<cardRequired;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}