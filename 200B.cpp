/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 200B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    float n, p, sum=0;
    cin >> n;
    for(int i=0 ; i<n; i++) {
        cin >> p;
        sum = sum + p; 
    }
    sum = sum/n;
    cout << sum;

    return 0;
}