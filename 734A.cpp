/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 734A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, d=0, a=0;
    string s;
    cin >> t;
    cin >> s;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='A') { a++; }
        else { d++; }
    }
    
    if(a>d) { cout << "Anton"; }
    else if(a<d) { cout << "Danik"; }
    else { cout << "Friendship"; }

    return 0;
}