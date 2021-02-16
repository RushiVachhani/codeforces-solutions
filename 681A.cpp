/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 681A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count=0;
    for(int i=0; i<n; i++) {
        string user;
        int rating_before, rating_after;
        cin >> user >> rating_before >> rating_after;
        if(rating_before>=2400 && (rating_after>rating_before)) {
            count++;
        }
    }
    count==0 ? cout<<"NO" : cout<<"YES";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}