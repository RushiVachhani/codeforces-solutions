/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 443A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    int count=0;
    getline(cin, str);
    for(char i='a' ; i<='z'; i++) {
        if(0<=str.find(i) && str.find(i)<=str.length()) {
            count++;
        }
    }
    cout<<count;
    return 0;
}