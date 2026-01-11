/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1409A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a,b;
        cin >> a >> b;
        int diff = abs(a-b);
        if(diff == 0) { cout<< 0<<"\n"; continue;}
        else {
            if(diff%10==0) {
                cout<<diff/10<<"\n";
            }
            else {
                cout<<(diff/10 + 1)<<"\n";
            }
        }
    }

    return 0;
}