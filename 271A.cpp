/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 271A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool isDistinct(string x) {
    sort(x.begin(), x.end());
    for(int i=1;i<x.length();i++) {
        if(x[i]==x[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string str;
    cin >> n;
    
    while(true) {
        n++;
        str = to_string(n);
        if(isDistinct(str)==true) {
            cout << n;
            break;
        }
    }
  
    return 0;
}