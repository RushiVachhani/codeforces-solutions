/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 546A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k,n,w;
    cin >> k >> n >> w;
    cout << max((k*((w*(w+1))/2))-n, 0);
    return 0;
}