/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 469A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,p,q,a;
    cin >> n;
    int arr[n] = {0};
    cin >> p;
    while(p--) {
        cin >> a;
        arr[a-1] = 1;
    }
    cin >> q;
    while(q--) {
        cin >> a;
        arr[a-1] = 1;
    }
    for(int i=0 ; i<n; i++) {
        if(arr[i]==0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}