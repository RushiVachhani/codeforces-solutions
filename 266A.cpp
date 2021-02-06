/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 266A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, remove = 0;
    string s;

    cin >> n >> s;

    for(int i=1; i<n; i++) {
        if(s[i]==s[i-1]) {
            remove ++;
        }
    }
    cout << remove;
    return 0; 
}