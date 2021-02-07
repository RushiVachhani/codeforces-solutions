/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 266B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int n, t;
    cin >> n >> t >> s;
    while(t--) {
        for(int i=1;i<s.length();i++) {
            if(s[i] == 'G' && s[i-1]=='B') {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}