/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 41A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();i++) {
        if(s1[i]!=s2[s2.length()-1-i]){
            cout<<"NO";
            return 0;
        }
    }

    cout<< "YES";

    return 0;
}