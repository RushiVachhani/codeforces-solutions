/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1030A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, r;
    cin >> t;
    while(t--) {
        cin >> r;
        if(r==1) {
            cout<< "HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}