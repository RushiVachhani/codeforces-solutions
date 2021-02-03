/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 136A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, p;
    cin >> t;

    int friends[t];

    for(int i=1 ; i<=t; i++) {
        cin >> p;
        friends[p-1] = i;
    }

    for(int i=0; i<t; i++) {
        cout << friends[i] << " ";
    }

    return 0;
}