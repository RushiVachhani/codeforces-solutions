/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 110A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    int count = 0;
    while(n!=0) {
        if(n%10==4 || n%10==7) {
            count++;
        }
        n = n/10;
    }
    if(count==4 || count==7) { cout<<"YES"; }
    else { cout<<"NO"; }

    return 0;
}