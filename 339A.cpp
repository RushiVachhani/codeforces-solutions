/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 339A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(s.length() == 1) {
        cout<<s;
        return 0;
    }

    sort(s.begin(), s.end());

    cout<< s[(s.length()/2)];
    int j=0;
    for(int i=(s.length()/2 + 1); i<s.length(); i++) {
        cout<<s[j]<<s[i];
        j++;
    }

    return 0;
}