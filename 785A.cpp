/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 785A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    int count=0;
    string s;
    while(t--) {
        cin >> s;
        switch (s[0])
        {
        case 'T':
            count+=4;
            break;
        
        case 'C':
            count+=6;
            break;
        
        case 'O':
            count+=8;
            break;
        
        case 'D':
            count+=12;
            break;
        
        case 'I':
            count+=20;
            break;
        
        default:
            count+=0;
            break;
        }
    }

    std::cout<< count;
    return 0;
}