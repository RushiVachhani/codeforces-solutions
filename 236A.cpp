/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 236A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    
    sort(s.begin(), s.end());

    int count = 1, appeared = 0;
    for(int i=1;i<s.length();i++) {
        if(s[i] != s[i-1]) {
            count ++;
        }
    }

    if(count % 2 == 0) {
        cout<<"CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0; 
}