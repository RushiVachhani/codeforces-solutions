/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 732A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    for(int i=1; i<10; i++) {
        if((a*i)%10==0 || (a*i)%10==b) {
            cout<< i;
            return 0;
        }
    }

    return 0;
}