/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 281A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(s[0]>='a' && s[0]<='z') {
        s[0] -= 32;
    }

    cout<< s;

    return 0;
}