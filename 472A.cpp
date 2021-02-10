/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 472A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if(n%2==0) {
        cout << n-4 <<" " << 4;
    }
    else {
        cout<< n-9 << " " << 9; 
    }

    return 0;
}